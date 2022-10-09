/*
https://leetcode.com/problems/copy-list-with-random-pointer/
138. Copy List with Random Pointer

*/

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    /*
    Node* copyRandomList(Node* head) {
        if(!head) return head;
        
        unordered_map<Node*, Node*> hash;
        Node* newhead = new Node(head->val);
        hash[head] = newhead;
        
        Node* newptr = newhead;
        Node* ptr = head->next;
        while(ptr)
        {
            Node* newnode = new Node(ptr->val);
            hash[ptr] = newnode;
            ptr = ptr->next;
            
            newptr->next = newnode;
            newptr = newnode;
        }
        
        newptr = newhead;
        ptr = head;
        while(ptr)
        {
            newptr->random = hash[ptr->random];
            ptr = ptr->next;
            newptr = newptr->next;
        }
        
        return newhead;
    }
    */
     Node* copyRandomList(Node* head) {
        if(!head) return head;
        
        unordered_map<Node*, Node*> hash;
        Node* ptr = head;
        while(ptr)
        {
            Node* newNode = new Node(ptr->val);
            hash[ptr] = newNode;
            ptr = ptr->next;
        }
        
        ptr = head;
        while(ptr)
        {
            hash[ptr]->next = hash[ptr->next];
            hash[ptr]->random = hash[ptr->random];
            ptr = ptr->next; 
        }
        
        return hash[head];
    }
};