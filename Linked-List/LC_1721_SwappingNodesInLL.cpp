/*
https://leetcode.com/problems/swapping-nodes-in-a-linked-list/
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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* n1=nullptr, *n2=nullptr;
        for(ListNode* p=head; p; p=p->next)
        { 
            if(--k == 0)
            {
                n1=p;
                n2=head;
            }
            else if(n2)
                n2 = n2->next;
            
        }
        swap(n1->val, n2->val);
        return head;
    }
};