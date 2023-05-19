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
        std::set<int> ans;
        if(head!=nullptr){
            ListNode* q = head;
            ans.insert(q->val);
            for(auto x = head->next; x!=NULL; x=x->next){
                if(ans.find(x->val)!=ans.end()) q->next=x->next;
                else ans.insert(x->val),  q=q->next;
            
            }
        }
        return head;
    }
};
