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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> ans;
          if(root==NULL){
           return ans;
       }
       
        q.push(root);
        
        while(!q.empty()){
            
            int k=q.size();
            int l=0;

            for(int i=0;i<k;i++){
                
                    root=q.front();
            q.pop();
            if(root->left!=NULL){
                q.push(root->left);
            }
            if(root->right!=NULL){
                q.push(root->right);
            }
            if(i==k-1){
                ans.push_back(root->val);
            }
            
            }
           
        }
        return ans;
    }
};