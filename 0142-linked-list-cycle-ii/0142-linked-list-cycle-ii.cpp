/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
         ListNode* p=head;
        ListNode* p1=head;

        vector<int> v;

        

        map<int,int> m;

        while(p1!=NULL && p1->next!=NULL){
            p=p->next;
            p1=p1->next->next;
           
            if(p==p1){
               p=head;
               while(p!=p1){
                   p=p->next;
                   p1=p1->next;
               }
               return p;
            }
             
           
        }
        return NULL;
        
    }
};