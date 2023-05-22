/*
https://leetcode.com/problems/design-browser-history/
1472. Design Browser History

*/

 
class BrowserHistory {
    vector<string> buffer;
    int cur, last;
public:
    BrowserHistory(string homepage) {
        buffer.push_back(homepage);
        cur = last = 0;
    }
    
    void visit(string url) {
        cur += 1;
        if(buffer.size() > cur)
            buffer[cur] = move(url);
        else
            buffer.push_back(url);
        last = cur;
    }
    
    string back(int steps) {
         cur = max(0, cur-steps);
        return buffer[cur];
    }
    
    string forward(int steps) {
        cur = min(last, cur+steps);
        return buffer[cur];
    }
};

/*
// Using Double Linked List
class DLLNode{
  public:
    string data;
    DLLNode *prev, *next;
    DLLNode(const string &url): data(url), prev(nullptr), next(nullptr){}
};
class BrowserHistory {
    DLLNode *head, *cur;
public:
    BrowserHistory(string homepage) {
        head = new DLLNode(homepage);
        cur = head;
    }
    
    void visit(string url) {
        DLLNode* newNode = new DLLNode(url);
        cur->next = newNode;
        newNode->prev = cur;
        cur = newNode;
    }
    
    string back(int steps) {
        while(cur->prev != nullptr and steps--){
            cur = cur->prev;
        }
        return cur->data;
    }
    
    string forward(int steps) {
        while(cur->next != nullptr and steps--){
            cur = cur->next;
        }
        return cur->data;
    }
};
*/

/* //Using STACK
class BrowserHistory {
    stack<string> future, history;
    string curUrl;
public:
    BrowserHistory(string homepage) {
        curUrl = move(homepage);
    }
    
    void visit(string url) {
        history.push(curUrl);
        curUrl = move(url);
        future = stack<string>();
    }
    
    string back(int steps) {
        while(!history.empty() and steps--)
        {
            future.push(curUrl);
            curUrl = history.top(); history.pop();
        }
        return curUrl;
    }
    
    string forward(int steps) {
        while(!future.empty() and steps--){
            history.push(curUrl);
            curUrl = future.top(); future.pop();
        }
        return curUrl;
    }
};
*/
/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */