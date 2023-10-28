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
    int sum=0;
    void dfs(TreeNode* curr,string s){
        if(curr==NULL){
                return;
            }
            if(curr->left==NULL&&curr->right==NULL){
                s=s+to_string(curr->val);
                cout<<s<<endl;
                sum+=stoi(s);
                return ;
            } 
            // else if(curr->left==NULL||curr->right==NULL){
            //     s=s+to_string(curr->val);
            //     cout<<s<<endl;
            //     return;
            // }
            // if(curr->right==NULL){
            //      s=s+to_string(curr->val);
            //     cout<<s<<endl;
            //     sum+=stoi(s);
            //     return ;
            // }
            
            
            s=s+to_string(curr->val);
            dfs(curr->left,s);
            dfs(curr->right,s);
        
        return ;
    }
    int sumNumbers(TreeNode* root) {
        TreeNode* curr;
        string s="";
        if(!root->left&&!root->right) return root->val;
        if(root->right==NULL)
        {s=s+to_string(root->val);dfs(root->left,s);}
        else if(root->left==NULL)
        {s=s+to_string(root->val);dfs(root->right,s);}
        else dfs(root,s);
       return sum;
        
    }
};