class Solution {
 public:
  bool hasCycle(ListNode* head) {
    ListNode* s = head;
    ListNode* f = head;

    while (f != nullptr && f->next != nullptr) {
      s = s->next;
      f = f->next->next;
      if (s == f) return true;
    }

    return false;
  }
};
