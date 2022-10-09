/*
https://leetcode.com/problems/design-front-middle-back-queue/
*/
class Node{
    public:
    Node* prev;
    int val;
    Node* next;
    Node(int v, Node* n=nullptr, Node* p=nullptr)
    {
        val = v;
        prev = p;
        next = n;
    }
};

class FrontMiddleBackQueue {
public: 
    Node *head, *tail, *mid;
    int size;
    FrontMiddleBackQueue() {
        head = new Node(-1);
        tail = new Node(-2);
        head->next = tail;
        tail->prev = head;
        size=0;
    }
    
    void firstElementInsert(Node* node)
    { // head...node...tail
        mid = node; //initialize mid
        mid->prev = head;
        mid->next = tail;
        head->next = mid;
        tail->prev = mid;  
        size++;
    }
    
    void pushFront(int val) {
        Node *node = new Node(val);
        if(head->next == tail) // first element
        {
           firstElementInsert(node); 
           return;
        }
        // head...node...head.next
        node->next = head->next;
        node->prev = head;
        head->next->prev = node;
        head->next = node;
        size++;
        if(size%2==0) // even length 2..1(mid)..3-->  4..2(mid)..1..3
            mid = mid->prev;
    }
    
    void pushMiddle(int val) {
        Node *node = new Node(val);
        if(head->next == tail) // first element
        {
           firstElementInsert(node); 
           return;
        }
        if(size%2 == 1) //currently odd length 2..1(mid)..3 --> 2..4(mid)..1(p)..3
        { // mid.prev .. node .. mid
            node->prev = mid->prev;
            node->next = mid;
            node->prev->next = node;
            node->next->prev = node;
        }
        else//currently even length 2..4(mid)..1..3 --> 2..4(p)..5(mid)..1..3
        { // mid ..  node .. mid.next
            node->next = mid->next;
            node->prev = mid;
            mid->next->prev = node;
            mid->next = node;
        } 
        mid = node;
        size++;
        // myprint("pushMiddle");
    }
    
    void pushBack(int val) {
        Node *node = new Node(val);
        if(head->next == tail) // first element
        {
           firstElementInsert(node);
           return;
        }
        // tail.prev...node...tail
        node->prev = tail->prev;
        tail->prev->next = node;
        node->next = tail;
        tail->prev = node;
        size++;
        if(size%2==1) // odd length 2(mid)..1 -->  2..1(mid)..3
            mid = mid->next;
    }
    
    int popFront() {
        if(head->next == tail)return -1;
        size--;
        // head .. node .. head.next.next;
        Node* node = head->next;
        node->next->prev = head;
        head->next = node->next;
        if(size%2 == 1)// odd length 1..2(mid)..3..4 --> 2..3(mid)..4
            mid = mid->next;
        int val = node->val;
        delete node;
        return val;
    }
    
    int popMiddle() {
        if(head->next == tail)return -1;
        // mid.prev ..  mid ..  mid.next
        Node* node = mid;
        node->next->prev = node->prev;
        node->prev->next = node->next;
        if(size%2==1) // 1..2..3 --> 1..3
            mid = mid->prev;
        else
            mid = mid->next;
            
        size--;
        int val = node->val;
        // delete node;
        return val;
    }
    
    int popBack() {
        if(head->next == tail)return -1;
        size--;
        // tail.prev.prev .. node .. tail;
        Node* node = tail->prev;
        node->prev->next = tail;
        tail->prev = node->prev;
        if(size%2 == 0)// even length 2..3(mid)..4 --> 2(mid)..3
            mid = mid->prev;
        int val = node->val;
        delete node;
        return val;
    }
    
    void myprint(string area)
    {
        Node* ptr = head; 
        cout<<area<<"->: ";
        while(ptr) { 
            cout<<ptr->val<<" ";
            if(ptr==mid)cout<<"(mid) ";
                ptr = ptr->next; 
        } 
        cout<<endl;
    }
};


// Using Two Deque
/*
class FrontMiddleBackQueue {
public:
    deque<int> a, b;
    FrontMiddleBackQueue() {
        a.clear();
        b.clear();
    }
    
    void balance()
    {
        while(abs(int(a.size())-int(b.size()))>1)
        {
            if(a.size()>b.size()){
                b.push_front(a.back()); 
                a.pop_back();
            }
            else
            {
                a.push_back(b.front()); b.pop_front();
            }
        }
        if(a.size()>b.size()){
            b.push_front(a.back());
            a.pop_back();
        }
    }
    
    void pushFront(int val) {
        a.push_front(val);
        balance();
        // cout<<"pushFront: "<<val<<" -> ";print();
    }
    
    void pushMiddle(int val) {
        b.push_front(val);
        balance();
        // cout<<"pushMiddle: "<<val<<" -> ";print();
    }
    
    void pushBack(int val) {
        b.push_back(val);
        balance();
        // cout<<"pushBack: "<<val<<" -> ";print();
    }
    
    int popFront() {
        if(isEmpty()) return -1;
        if(a.empty())
        {
            int val = b.front();
            b.pop_front();
            return val;
        }
        int val = a.front();
        a.pop_front();
        balance();
        // cout<<"popFront: "<<val<<" -> ";print();
        return val;
    }
    
    int popMiddle() {
        if(isEmpty()) return -1;
        int val;
        if(a.size() == b.size())
        {
            val = a.back();
            a.pop_back();
        }
        else
        {
            if(b.empty())
            {
                val = a.front(); a.pop_front(); return val;
            }
            val = b.front(); b.pop_front();  
        }
        // cout<<"popMiddle: "<<val<<" -> ";print();
        balance();
        return val;
    }
    
    int popBack() {
        if(isEmpty()) return -1;
        if(b.empty())
        {
            int val = a.back();
            a.pop_back();
            return val;
        }
        int val = b.back();
        b.pop_back();
         balance();
        return val;
    }
    
    bool isEmpty()
    {
        return a.empty() and b.empty();
    }     
};
*/
/* Using Single Dequeu
class FrontMiddleBackQueue {
public:
    deque<int> dq;
    FrontMiddleBackQueue() {
        dq.clear();
    }
    
    void pushFront(int val) {
        dq.push_front(val);
        // cout<<"pushFront: "<<val<<" -> ";print();
    }
    
    void pushMiddle(int val) {
        int mid = dq.size()/2; 
        dq.insert(dq.begin()+mid, val); 
        // cout<<"pushMiddle: "<<val<<" -> ";print();
    }
    
    void pushBack(int val) {
        dq.push_back(val);
        // cout<<"pushBack: "<<val<<" -> ";print();
    }
    
    int popFront() {
        if(dq.empty()) return -1;
        int val = dq.front();
        dq.pop_front();
        // cout<<"popFront: "<<val<<" -> ";print();
        return val;
    }
    
    int popMiddle() {
        if(dq.empty()) return -1;
        int val;
        int mid =  dq.size()/2;
        if(dq.size() % 2 ==0)
             mid=mid-1;     
        auto it = dq.begin()+mid;
        val = *it;
        dq.erase(it);
        // cout<<"popMiddle: "<<val<<" -> ";print();
        return val;
    }
    
    int popBack() {
        if(dq.empty()) return -1;
        int val = dq.back();
        dq.pop_back();
        // cout<<"popBack: "<<val<<" -> ";print();
        return val;
    }
    void print()
    {
        for(int &x: dq)  cout<<x<<" "; cout<<endl;
    }
};
*/

 /* Using vector
class FrontMiddleBackQueue {
public:
    vector<int> dq;
    FrontMiddleBackQueue() {
        
    }
    
    void pushFront(int val) {
        dq.insert(dq.begin(), val);
        // cout<<"pushFront: "<<val<<" -> ";print();
    }
    
    void pushMiddle(int val) {
        int size = dq.size(); 
        dq.insert(dq.begin()+size/2, val); 
        // cout<<"pushMiddle: "<<val<<" -> ";print();
    }
    
    void pushBack(int val) {
        dq.push_back(val);
        // cout<<"pushBack: "<<val<<" -> ";print();
    }
    
    int popFront() {
        if(dq.empty()) return -1;
        int val = dq.front();
        dq.erase(dq.begin());
        // cout<<"popFront: "<<val<<" -> ";print();
        return val;
    }
    
    int popMiddle() {
        if(dq.empty()) return -1;
        int size = dq.size(); 
        int hf = size/2;
        int val;
        if(size % 2 ==0)
             hf=hf-1;     
        val = dq[hf];
        dq.erase(dq.begin()+hf);
        // cout<<"popMiddle: "<<val<<" -> ";print();
        return val;
    }
    
    int popBack() {
        if(dq.empty()) return -1;
        int val = dq.back();
        dq.erase(dq.end()-1);
        // cout<<"popBack: "<<val<<" -> ";print();
        return val;
    }
    void print()
    {
        for(int &x: dq)  cout<<x<<" "; cout<<endl;
    }
};
*/
/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */