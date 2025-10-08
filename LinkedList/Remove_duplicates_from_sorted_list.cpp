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
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp!=NULL){
            if(prev==NULL){
                prev=temp;
                temp=temp->next;
            }
            else if(temp->val == prev->val){
                temp=temp->next;
                prev->next=temp;
            }
            else {
                prev=temp;
                temp=temp->next;
            }
        }
        return head;
    }
};