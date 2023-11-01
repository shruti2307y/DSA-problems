class Solution {
public:
    void findComb(vector<int>&candidates,int target,int sum,vector<int>&temp,vector<vector<int>>&ans,int ind){
        if(sum>=target){
            if(sum==target)
            ans.push_back(temp);
            return;
        }
        for(int i=ind;i<candidates.size();i++){
            temp.push_back(candidates[i]);
            sum+=candidates[i];
            findComb(candidates,target,sum,temp,ans,i);
            sum=sum-candidates[i];
            temp.pop_back();
            
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int sum=0;
        vector<int>temp;
        int ind=0;
        vector<vector<int>>ans;
        findComb(candidates,target,sum,temp,ans,ind);
        return ans;
        
    }
};