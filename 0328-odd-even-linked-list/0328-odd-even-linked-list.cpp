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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* p=head;
        vector<int> v;

        while(p!=NULL){
            v.push_back(p->val);
            p=p->next;
        }
        vector<int> v1;

        for(int i=0;i<v.size();i++){
            if(i%2==0){
                v1.push_back(v[i]);
            }
        }

         for(int i=0;i<v.size();i++){
            if(i%2!=0){
                v1.push_back(v[i]);
            }
        }
        p=head;
        int i=0;

        while(p!=NULL){
            p->val=v1[i];
            i++;
            p=p->next;
        }
        
         

        return head;


    }
};