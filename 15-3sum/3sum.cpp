class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n=nums.size();
        int i=0,j=n-1;
        int k=j-1;
        int sum;
        vector<vector<int>>v;
        vector<int>temp;
        int x;
        sort(nums.begin(),nums.end());
        for(i=0;i<=n-3;i++){
            
            j=i+1;
            k=n-1;
            if(i==0||nums[i]!=nums[i-1]){
            x=nums[i]*-1;
            while(j<k){
                temp.clear();
                if(nums[j]+nums[k]==x){
                    temp.insert(temp.end(),{nums[i],nums[j],nums[k]});
                    //if(find(v.begin(),v.end(),temp)==v.end())
                    v.push_back(temp);
                    
                   j++;
                    k--;
                    while(nums[j]==nums[j-1]&&j<k) j++;
                    

                   
                    while(nums[k]==nums[k+1]&&k>j) k--;
                }
                else if(nums[j]+nums[k]<x){
                   
                     j++;
                   // while(nums[j]==nums[j-1]&&j<k) j++;
                }
                else{
                    

                     k--;
                   // while(nums[k]==nums[k-1]&&k>j) k--;
                }
            }
        }
        }
        return v;

    }
};