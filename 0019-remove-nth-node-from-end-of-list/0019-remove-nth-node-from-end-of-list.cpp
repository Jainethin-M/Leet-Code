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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(n<=0)return head;
        ListNode* ans= new ListNode(0,head);
        ListNode*dummy = head;
        int count=0;
        while(dummy!=NULL){
            count++;
            dummy=dummy->next;
        }
        dummy=ans;
        for(int i=0;i<count-n;i++){
            dummy=dummy->next;
            cout<<dummy->val;
        }
        dummy->next=dummy->next->next;
        return ans->next;
    }
};