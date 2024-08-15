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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = new ListNode(0,NULL);
        ListNode* ans=head;

        while(list1!=NULL || list2!=NULL){
            int l1=INT_MAX;
            int l2=INT_MAX;
            if(list1!=NULL)l1=list1->val;
            if(list2!=NULL)l2=list2->val;
            if(l1<l2){
                head->next=list1;
                list1=list1->next;

            }
            else{
                head->next = list2;
                list2=list2->next;
            }
            head=head->next;
        }
        return ans->next;

    }
};