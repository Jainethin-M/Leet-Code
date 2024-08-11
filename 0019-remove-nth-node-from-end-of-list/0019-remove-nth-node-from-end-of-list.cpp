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
        ListNode* dummy = head;
        int totalNode=1;
        while(dummy->next!=NULL){
            totalNode++;
            dummy=dummy->next;
        }
        
        ListNode* res=new ListNode(0,head);
        ListNode* nh=res;
        for(int i=1;i<=totalNode-n;i++){
            res=res->next;    
        }
        if(res->next->next!=NULL)res->next=res->next->next;
        else res->next=NULL;
        return nh->next;
    }
};