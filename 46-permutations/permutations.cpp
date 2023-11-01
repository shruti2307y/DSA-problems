class Solution {
public:
    void findAll(vector<int>nums,vector<int>&temp,vector<vector<int>>& ans,unordered_map<int,bool>&mp){
        if(temp.size()==nums.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!mp[nums[i]])
            {temp.push_back(nums[i]);
            mp[nums[i]]=1;
           
            
            
             
            
           
            findAll(nums,temp,ans,mp);
             temp.pop_back();
            mp[nums[i]]=0;
            }

        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
      vector<int>temp;
      vector<vector<int>>ans;
      unordered_map<int,bool>mp;
      for(auto i=0;i<nums.size();i++){
          mp[nums[i]]=0;
      }
      findAll(nums,temp,ans,mp);
      return ans;
        
    }
};