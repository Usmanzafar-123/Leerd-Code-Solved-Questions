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
    bool hasCycle(ListNode *head) {
        ListNode* p=head;
        ListNode* p1=head;

        map<int,int> m;

        while(p1!=NULL && p1->next!=NULL){
            p=p->next;
            p1=p1->next->next;
            if(p==p1){
                return true;
            }
           
        }
        return false;
        
    }
};