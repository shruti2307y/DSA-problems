class Solution {
public:
    void combine(int n,int k,vector<int>&temp, vector<vector<int>>&ans,int i){
        if(temp.size()==k){
            ans.push_back(temp);
            return ;
        }
        for(int j=i+1;j<=n;j++){
            
            temp.push_back(j);
            
            combine(n,k,temp,ans,j);
            
            temp.pop_back();
            
            
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>temp;
        vector<vector<int>>ans;
        vector<int>mp{n+1,0};
        int i=0;
        combine(n,k,temp,ans,i);
        return ans;
    }
};