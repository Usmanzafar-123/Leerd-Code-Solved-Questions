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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* p=head;
        ListNode* temp;
        if(head==NULL){
            return head;
        }

        int len=0;

        while(p!=NULL){
            len++;
            p=p->next;
        }
        if(n>len){
            return NULL;
        }
        if(len-n==0){
            head=head->next;
            return head;
        }
         ListNode* pre=head;
         p=head;
         for(int i=0;i<len-n;i++){
             pre=p;
            p=p->next;
        }
        pre->next=p->next;
        return head;
    }
};