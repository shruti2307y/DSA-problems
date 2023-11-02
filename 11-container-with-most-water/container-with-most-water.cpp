class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
         int i=0,j=n-1;
         int max=0;
         int curr;
         while(i<j){
             curr=min(height[i],height[j])*(j-i);
             if(curr>max){
                 max=curr;
             }
             if(height[i]<height[j]) i++;
             else j--;
         }
         return max;
        
    }
};