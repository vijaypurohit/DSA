/*
234. Palindrome Linked List

https://leetcode.com/problems/palindrome-linked-list/
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* getMid(ListNode* head)
    {
        ListNode* slow = head, *fast = head->next;
        while(fast and fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    
    ListNode* reverse(ListNode* head)
    {
        ListNode* p=nullptr, *q =head, *r = nullptr;
        while(q)
        {
            p = q->next;
            q->next = r;
            r = q;
            q = p;
        }
        return r;
    }
    
    bool isPalindrome(ListNode* head) { 
        
        if(head == nullptr or head->next == nullptr ) return true;
        
        ListNode* ptr = head; 
        ListNode* midptr = getMid(head);
        ListNode* ptrrev = reverse(midptr->next);
        
        while(ptrrev)
        {
            if(ptr->val != ptrrev->val)
                return false;
            ptr = ptr->next;
            ptrrev = ptrrev->next;
        }
        return true;
    }
    
    /*
    bool isPalindrome(ListNode* head) {  
        ListNode* slow = head, *fast = head;
        while(fast and fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        // cout<<slow->val<<" ";
        stack<ListNode*> st;
        while(slow)
        {
            st.push(slow);
            slow = slow->next;
        }
        
        ListNode* ptr = head;
        while(!st.empty())
        {
            ListNode* ptrrev = st.top(); st.pop();
            if(ptr->val != ptrrev->val)
                return false;
            ptr = ptr->next; 
        }
        
        return true;
    }
    */
};