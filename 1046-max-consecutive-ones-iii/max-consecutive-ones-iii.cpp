class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0,r=0;
        int max=0;
        int maxf=0;
        int mp[2]={0};
        if(nums[0]==1){mp[nums[0]]=1;maxf=1;}
        while(r<n){
            while(r-l+1-maxf<=k&&r<n){
                r++;
                if(r<n){mp[nums[r]]++;
                if(mp[nums[r]]>maxf&&nums[r]==1)maxf=mp[nums[r]];}
                
            }
            if(r-l>max) max=r-l;
            while(r-l+1-maxf>k&&l<n){
                mp[nums[l]]--;
                l++;
            }
        }
        return max;
        
    }
};