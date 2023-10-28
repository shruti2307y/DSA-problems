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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        vector<int>temp;
        vector<vector<int>>ans;
        queue<TreeNode*> q;
        if(root==NULL) return ans;
        q.push(root);
        int l;
        TreeNode* currNode=new TreeNode(0);
        while(!q.empty()){
            l=q.size();
            while(l--&&!q.empty()){
            currNode=q.front();
            if(currNode->left!=NULL){
                q.push(currNode->left);
            
            }
            if(currNode->right!=NULL){
                q.push(currNode->right);
            }
            temp.push_back(currNode->val);
            q.pop();
            }
        
            ans.push_back(temp);
            temp.clear();
        }
        reverse(ans.begin(),ans.end());
        return ans ;
    }
};