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
        int x;
        int max=INT_MIN;
        int sum=0;
        queue<TreeNode*> q;
        int l;
        if(root==NULL) return 0;
        q.push(root);
        int level=0;
        TreeNode* curr;
        while(!q.empty()){
            l=q.size();
            level++;
            while(l--){
                curr=q.front();
                sum+=curr->val;
                if(curr->left!=NULL) q.push(curr->left);
                if(curr->right!=NULL) q.push(curr->right);
                q.pop();
            }
            cout<<sum<<endl;
            if(sum>max) {
                max=sum;
                x=level;
            }
            sum=0;

        }
        if(sum>max){
            max=sum;
            x=level;
        }
        cout<<max;
        return x;
        
    }
};