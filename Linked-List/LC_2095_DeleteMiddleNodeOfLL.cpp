/*
https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/
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
    ListNode* deleteMiddle(ListNode* head) {
        if(headh==nullptr || head->next == nullptr){
            // delete head; head = nullptr;
            return nullptr; 
        } 
        ListNode* slow = head, *fast = head->next->next;
        while(fast and fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return head;
    }
};