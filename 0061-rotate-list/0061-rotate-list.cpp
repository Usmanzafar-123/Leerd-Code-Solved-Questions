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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* p=head;
        if(head==NULL){
            return head;
        }
        
        int l=1;
        while(p->next!=NULL){
            l++;
            p=p->next;
        }
        p->next=head;
        

        k=l-k%l;
        
        while(k--){
            p=p->next;
            
            
        }
        head=p->next;
        p->next=NULL;

      
        return head;
        
    }
};