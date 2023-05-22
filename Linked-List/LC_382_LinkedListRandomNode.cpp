/*
https://leetcode.com/problems/linked-list-random-node/
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
//     vector<int> nums;
//     Solution(ListNode* head) {
//         while(head){
//             nums.push_back(head->val);
//             head = head->next;
//         }
//     }
    
//     int getRandom() {
//         int idx = rand()%nums.size();
//         return nums[idx];
//     }
     
    ListNode * head = nullptr;
    Solution(ListNode* head) {
          this->head = head;
    }
    
    int getRandom() {
        int i=1, ans=0;
        ListNode *ptr = head;
        while(ptr){
            if(rand()%i == 0) // replace ans with i-th node.val with probability 1/i
                ans = ptr->val;
            i++;
            ptr = ptr->next;
        }
        return ans;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */