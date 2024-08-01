/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode result = {0, NULL};
    struct ListNode *track = &result;

    while (list1 || list2) {
        if (list1 && list2) {
            struct ListNode **smaller = list1->val < list2->val ? &list1 : &list2;
            track->next = (*smaller);
            (*smaller) = (*smaller)->next;
        } else {
            struct ListNode **valid = list1 ? &list1 : &list2;
            track->next = (*valid);
            break;
        }
        track = track->next;
    }

    return result.next;
}