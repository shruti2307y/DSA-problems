class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int i,j,k;
        int min=INT_MAX;
        int sum;
        int x;
        sort(nums.begin(),nums.end());
        for(i=0;i<=n-3;i++){
            j=i+1;
            k=n-1;
            x=target-nums[i];
            while(j<k){
              auto targetDifference = target - nums[i] - nums[j] - nums[k];
      
      if(targetDifference == 0) {
      
        return target - targetDifference;
      }
      
      if(abs(targetDifference) < abs(min)) {
        
        min = targetDifference;
      }
     
      if(abs(targetDifference) < abs(min) || (abs(targetDifference) == abs(min) && targetDifference > min)) {
       
        min = targetDifference;
      }
      
      if(targetDifference > 0) {
        
        j++;
      } else {
       
        k--;
      }  
            }
       
        
    }
     return target-min;
    }
};