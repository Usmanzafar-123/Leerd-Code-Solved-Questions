/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
int l=1;
vector<pair<int,int>> v;
        while(!q.empty()){
            int k=q.size();
            
            int sum=0;
            
            for(int i=0;i<k;i++){
                root=q.front();
                 q.pop();
                  if(root->left!=NULL){
                q.push(root->left);
            }
                    if(root->right!=NULL){
                q.push(root->right);
            }
            sum=sum+root->val;
            }
            v.push_back({l,sum});
            l++;
        }
        int maxi=INT_MIN;
        for(int i=0;i<v.size();i++){
            maxi=max(maxi,v[i].second);
        }
        for(int i=0;i<v.size();i++){
           if(maxi==v[i].second){
               return v[i].first;
           }
        }
return 0;
        
    }
};