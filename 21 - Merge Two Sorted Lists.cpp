class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL) return list1;
        else if(list1==NULL && list2!=NULL) return list2;
        else if(list1!=NULL && list2==NULL) return list1;
        else {
       ListNode* i = list1; 
       while(i->next!=NULL)i=i->next;
       i->next=list2;
       for(ListNode* k = list1; k!=NULL;k=k->next){
                 for(ListNode* j = k->next; j!=NULL;j=j->next){
                     if(k->val > j->val){
                         int temp = k->val;
                         k->val = j->val;
                         j->val = temp;
                     }
                 }
       }
       return list1;
    }
    }
};
