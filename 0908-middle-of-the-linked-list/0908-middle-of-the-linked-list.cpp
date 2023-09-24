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
    ListNode* middleNode(ListNode* head) {
        ListNode* p=head;
        int a=0,b=0;
        ListNode* lol;
        lol=new ListNode();
        ListNode* p1=lol;
        while(p!=NULL){
            p=p->next;
            a++;
        }
        if(a<=1){
            return head;
        }
        if(a%2==0){
            a=a/2+1;
        }
        else{
            a=(a+1)/2;
        }
p=head;
         while(p!=NULL){
            p=p->next;
            b++;
            if(b>=a-1){
                p1->next=p;
                p1=p1->next;
            }
        }
        cout<<a<<" "<<b;
        return lol->next;
        
    }
};