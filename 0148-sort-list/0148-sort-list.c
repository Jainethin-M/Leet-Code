
struct ListNode* merge(struct ListNode* list1, struct ListNode* list2) {

    if (list1 == NULL) {
        return list2;
    } 
    if (list2 == NULL) {
        return list1;
    }
    if (list1->val < list2->val) {
        list1->next = merge(list1->next, list2);
        return list1;
    } else {
        list2->next = merge(list1, list2->next);
        return list2;
    }
}

struct ListNode* findMiddle(struct ListNode* head) {
    struct ListNode *slow = head, *fast = head, *prev = NULL;

    while (fast != NULL && fast->next != NULL) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    if (prev) {
    prev->next = NULL;
    }

    return slow;
}

struct ListNode* sortList(struct ListNode* head){
    if (head == NULL || head->next == NULL) {
        return head;
    }
    struct ListNode* middle = findMiddle(head);
    struct ListNode* right = sortList(middle); 
    struct ListNode* left = sortList(head);
    return merge(left, right);
}