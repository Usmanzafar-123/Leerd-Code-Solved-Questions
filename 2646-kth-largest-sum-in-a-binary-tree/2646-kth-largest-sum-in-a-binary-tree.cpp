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
    long long kthLargestLevelSum(TreeNode* root, int k) {
         queue<TreeNode*> q;
        q.push(root);

vector<long long> v;
int l=0;
        while(!q.empty()){
            int k=q.size();
            
            long long sum=0;
            
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
            v.push_back(sum);
            l++;
        }
       sort(v.begin(),v.end());
       reverse(v.begin(),v.end());
      for(int i=0;i<v.size();i++){
           cout<<v[i]<<" ";
      }
       if(k>l){
           return -1;
       }
       return v[k-1];
    }
};