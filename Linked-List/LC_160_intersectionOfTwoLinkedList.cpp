/*
160. Intersection of Two Linked Lists

https://leetcode.com/problems/intersection-of-two-linked-lists/
*/ 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* ptrA = headA;
        ListNode* ptrB = headB;
        int m=0, n=0, diff;
        while(ptrA)
        {
            m++;
            ptrA = ptrA->next;
        }
        while(ptrB)
        {
            n++;
            ptrB = ptrB->next;
        }
        
        ptrA = headA; ptrB = headB;
        
        if(m>n)
        {
            diff = m-n;
            while(diff--)
                ptrA = ptrA->next;
        }
        else
        {
            diff = n-m;
            while(diff--)
                ptrB = ptrB->next;
        }
        
        while(ptrA && ptrB)
        {
            if(ptrA == ptrB)
                return ptrA;
            ptrA = ptrA->next;
            ptrB = ptrB->next;
        }
        
        return nullptr;
    }
};