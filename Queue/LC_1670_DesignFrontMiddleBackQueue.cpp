/*
1670. Design Front Middle Back Queue

https://leetcode.com/problems/design-front-middle-back-queue/ 
*/

// class FrontMiddleBackQueue {
// public:
//     deque<int> fdq;
//     deque<int> bdq;
//     FrontMiddleBackQueue() {
        
//     }
    
//     void pushFront(int val) {
//         fdq.push_front(val);
//         cout<<"pushFront: "<<val<<" -> ";print();
//     }
    
//     void pushMiddle(int val) {
//         int size1 = fdq.size();
//         int size2 = bdq.size(); 
//         if(size1 < size2)
//         {
//             fdq.push_back(val);
//         }
//         else if(size1 > size2)
//         {
//             bdq.push_front(val);
//         }
//         else
//         {
//             fdq.push_back(val);
//         }
//         cout<<"pushMiddle: "<<val<<" -> ";print();
//     }
    
//     void pushBack(int val) {
//         bdq.push_back(val);
//         cout<<"pushBack: "<<val<<" -> ";print();
//     }
    
//     int popFront() {
//         if(isEmpty()) return -1;
        
//         int val;
//         if(fdq.size())
//         {
//             val = fdq.front();
//             fdq.pop_front();
//         }
//         else
//         {
//             val = bdq.front();
//             bdq.pop_front();
//         }
//         cout<<"popFront: "<<val<<" -> ";print();
//         return val;
        
//     }
    
//     int popMiddle() {
//         int size1 = fdq.size();
//         int size2 = bdq.size(); 
//         if(size1==0 and size2==0) return -1;
//         int val;
//         if(size1 <  size2)
//         {
//             val = bdq.front();
//             bdq.pop_front();
//         }
//         else  if(size1 >  size2)
//         {
//             val = fdq.back();
//             fdq.pop_back();
//         }
//         else
//         {
//             val = fdq.back();
//             fdq.pop_back();
//         }
//         cout<<"popMiddle: "<<val<<" -> ";print();
//         return val;
//     }
    
//     int popBack() {
//         if(isEmpty()) return -1;
        
//         int val;
//         if(bdq.size())
//         {
//             val = bdq.back();
//             bdq.pop_back();
//         }
//         else
//         {
//             val = fdq.back();
//             fdq.pop_back();
//         }
//         cout<<"popBack: "<<val<<" -> ";print();
//         return val;
//     }
    
//     bool isEmpty()
//     {
//         if(fdq.size()==0 and bdq.size() == 0)
//             return true;
//         return false;
//     }
    
//     void print()
//     {
//         for(int &x: fdq)  cout<<x<<" ";
//         cout<<"<> ";
//         for(int &y: bdq) cout<<y<<" ";cout<<endl;
//     }
// };

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
    void print()
    {
        for(int &x: dq)  cout<<x<<" "; cout<<endl;
    }
};

/*
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
 /*
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