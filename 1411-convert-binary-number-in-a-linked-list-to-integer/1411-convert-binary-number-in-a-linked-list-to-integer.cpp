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
    int getDecimalValue(ListNode* head) {
        vector<int> v;
        int a=0;
        
        ListNode* p1=head;
        while(p1!=NULL){
            v.push_back(p1->val);
            p1=p1->next;
        }
        for(int i=0;i<v.size();i++){
            if(v[i]==1){
                a=a+pow(2,(v.size()-1)-i);
            }
        }
        return a;
    }
};