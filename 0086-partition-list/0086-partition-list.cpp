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
    ListNode* partition(ListNode* head, int x) {

        ListNode* p=head;

        vector<int> v1;
        vector<int> v2;

        while(p!=NULL){
            if(p->val>=x){
                v1.push_back(p->val);
            }
            else{
                v2.push_back(p->val);
            }
            p=p->next;
        }

        for(int i=0;i<v1.size();i++){
            v2.push_back(v1[i]);
        }
        p=head;
        int i=0;
        while(p!=NULL){
            p->val=v2[i];
            i++;
            p=p->next;
        }

        return head;
    }
};