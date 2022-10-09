/*
622. Design Circular Queue
https://leetcode.com/problems/design-circular-queue/
*/

class MyCircularQueue {
public:
    vector<int> q;
    int front, rear;
    int size;
    MyCircularQueue(int k) {
        q.assign(k, -1);
        front = rear = -1;
        size = k;
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        
        if(rear == -1) 
            front = rear = 0; 
        else
            rear = (rear+1)%size;  
        q[rear] = value; 
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        q[front] = -1;
        if(front == rear)
            front = rear = -1;
        else
            front = (front+1)%size; 
        return true;
    }
    
    int Front() {
        if(front == -1) return -1;
        return q[front];
    }
    
    int Rear() {
        if(rear == -1) return -1;
        return q[rear];
    }
    
    bool isEmpty() {
        return rear == -1;
    }
    
    bool isFull() {
        return (rear+1)%size == front;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */