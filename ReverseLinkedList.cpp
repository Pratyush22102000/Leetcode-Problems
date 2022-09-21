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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return head;
        ListNode*temp = head;
        vector<int> nums;
        int n = 0;
        while(head!=NULL){
           nums.push_back(head->val);
            head=head->next;
            n++;
        }
        head = temp;
        while(head!=NULL){
            head->val = nums[n-1];
            head=head->next;
            n--;
        }return temp;
    }
};
