
struct ListNode* retrieveSmallestAmongKLists(struct ListNode** lists, int listsSize) {
  int minIdx = -1;
  int currMin = INT_MAX;
  for (int i = 0; i < listsSize; i++) {
    if (lists[i] && lists[i]->val < currMin) {
      currMin = lists[i]->val;
      minIdx = i;
    }
  }

  struct ListNode* minNode = NULL;
  if (minIdx != -1) {
    minNode = lists[minIdx];
    lists[minIdx] = lists[minIdx]->next;
  }
  return minNode;
}
struct ListNode* mergeKLists(struct ListNode** lists, int listsSize){
  struct ListNode dummy;
  memset(&dummy, 0, sizeof(struct ListNode));
  struct ListNode* curr = &dummy, *minNode;
  while ((minNode = retrieveSmallestAmongKLists(lists, listsSize)) != NULL) {
    curr->next = minNode;
    curr = curr->next;
  }
  return dummy.next;
}