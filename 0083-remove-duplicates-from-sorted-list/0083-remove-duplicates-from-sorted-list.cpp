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
        if(head == NULL || head->next == NULL)return head;
        unordered_set<int> uset;
        ListNode * dummy =head;
        ListNode *dum=head;
        uset.insert(dummy->val);
        while(dum!=NULL){
            while(dum!=NULL && uset.count(dum->val)){
                dum=dum->next;
            }
            if(dum!=NULL)
            uset.insert(dum->val);
            dummy->next=dum;
            dummy=dummy->next;
            
            
            
        }
        return head;
    }
};