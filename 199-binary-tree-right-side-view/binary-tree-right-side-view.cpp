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
        TreeNode* curr;
        queue<TreeNode*>q;
        int l;
        vector<int>temp;
        if(root==NULL) return temp;
        q.push(root);

        while(!q.empty()){
            l=q.size();
            while(l--){
                curr=q.front();
                if(curr->left!=NULL) q.push(curr->left);
                if(curr->right!=NULL) q.push(curr->right);
                q.pop();
              
            }
            temp.push_back(curr->val);
        }
        return temp;

        
    }
};