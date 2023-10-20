class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int r=0;
        int n=nums.size();
        int sum=0;
        int range;
        int min=INT_MAX;
        while(i<n&&r<n&&i<=r){
            sum+=nums[r];
            while(r<n-1&&sum<target){
                r++;
                sum+=nums[r];
            }
            if(sum<target) return 0;
            while(sum-nums[i]>=target&&i<n){
                
                sum-=nums[i];
                i++;
            
            }
            range=r-i+1;
            if(range<min) min=range;
            r++;

        }
        
        return min;
        
    }
};