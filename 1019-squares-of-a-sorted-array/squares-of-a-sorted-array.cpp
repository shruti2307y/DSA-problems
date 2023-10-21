class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=-1,j=0;
        int n=nums.size();
        vector<int>v;
        if(nums[0]<0)
        {while(nums[j]<0&&j<n-1){
            j++;
        }
        i=j-1;
        }
        
        while(i>=0&&j<n){
            int squarel=pow(nums[i],2);
            int squarer=pow(nums[j],2);
            if(squarel<squarer){
                v.push_back(squarel);
                i--;
            }
            else if(squarel==squarer){
                 v.push_back(squarel);
                  v.push_back(squarel);
                 i--;j++;
            }
            else{
                v.push_back(squarer);
                j++;

            }
            }
            while(i>=0){
                int squarel=pow(nums[i],2);
                v.push_back(squarel);
                
                i--;

            }
            while(j<n){
                int squarer=pow(nums[j],2);
                v.push_back(squarer);
                j++;
            }
            return v;
        }


        
    };
