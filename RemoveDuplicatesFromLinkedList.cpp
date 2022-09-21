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
    ListNode* deleteDuplicates(ListNode* head) {
        //ios_base::sync_with_stdio(0);
        //cin.tie(0);
       // cout.tie(0);
        if(head==NULL) return head;
        ListNode*dummy = new ListNode(-1);
        dummy->next = head;
        ListNode*temp = dummy;
        while(temp->next!=NULL){
            if(temp->val==temp->next->val){
                temp->next = temp->next->next;
            }else{
                temp = temp->next;
            }
        }return head;
    }//1,1,2
};
