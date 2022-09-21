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
    ListNode* removeElements(ListNode* head, int val) {
        // ios_base::sync_with_stdio(0);
        // cin.tie(0);
        // cout.tie(0);
        ListNode*dummy = new ListNode(0);
        dummy->next = head;
        ListNode*temp=dummy;
        // while(temp!=NULL){
        //     if(temp->val==val){
        //         head = temp->next;
        //     }temp = temp->next;
        // }
        while(temp!=NULL&&temp->next!=NULL){
            if(temp->next->val==val){
                temp->next = temp->next->next;
            }else temp=temp->next;
                
        }
        
     
        
        return dummy->next;
    }
};
