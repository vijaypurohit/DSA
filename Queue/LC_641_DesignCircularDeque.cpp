/*
641. Design Circular Deque

https://leetcode.com/problems/design-circular-deque/
*/

class MyCircularDeque {
public:
    vector<int> dq;
    int front, rear;
    int size;
    MyCircularDeque(int k) {
        dq.assign(k, -1);
        front = rear = -1;
        size = k;
    }
    
    bool insertFront(int value) {
        if(isFull()) return false;
        
        if(front == -1)
            front = rear = 0;
        else
            front = (front-1 + size)%size; 
        
        dq[front] = value;
        
        return true;
    }
    
    bool insertLast(int value) {
        if(isFull()) return false;
        
        if(rear == -1)
            front = rear = 0;
        else
            rear = (rear+1)%size;
        
        dq[rear] = value;
        
        return true;
    }
    
    bool deleteFront() {
        if(isEmpty()) return false;
        
        dq[front] = -1;
        if(front == rear)
            front = rear = -1;
        else
            front = (front+1)%size;
            
        return true;
    }
    
    bool deleteLast() {
        if(isEmpty()) return false;
        
        dq[rear] = -1;
        if(front == rear)
            front = rear = -1;
        else
            rear = (rear-1 + size)%size;
        
        return true;
    }
    
    int getFront() {
        if(front == -1) return -1;
        return dq[front];
    }
    
    int getRear() {
        if(rear == -1) return -1;
        return dq[rear];
    }
    
    bool isEmpty() {
         return rear == -1;
    }
    
    bool isFull() {
        return (rear+1)%size == front;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */