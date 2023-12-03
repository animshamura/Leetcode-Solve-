class Solution {
 public:
  ListNode* removeElements(ListNode* head, int val) {
    ListNode dummy(0, head);
    ListNode* prev = &dummy;

       while (head!=nullptr){
      if (head->val != val) {
        prev->next = head;
        prev = prev->next;
      }
      head = head->next;
       }

      prev->next = nullptr; 

    return dummy.next;
  }
};
