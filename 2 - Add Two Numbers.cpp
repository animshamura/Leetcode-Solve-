class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode* point = new ListNode(0);
      ListNode* ans = point;
      int c = 0;
      while(l1||l2||c){
          if(l1) {c+=l1->val; l1=l1->next;}
          if(l2) {c+=l2->val; l2=l2->next;}
          ans->next= new ListNode(c%10);
          c/=10;
          ans=ans->next;
      }

      return point->next;
    }
};
