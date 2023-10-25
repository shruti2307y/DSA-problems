class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        map<int,int> mp;
        int n=intervals.size();
        int i;
       sort(intervals.begin(),intervals.end());
       vector<int>temp;
       vector<vector<int>>ans;
       int start=intervals[0][0];
       int end=intervals[0][1];
       for(i=1;i<n;i++){
           if(intervals[i][0]<=end){
               if(intervals[i][1]>end)
                end=intervals[i][1];    
                
           }
           else{
               temp.push_back(start);
               temp.push_back(end);
               ans.push_back(temp);
               start=intervals[i][0];
               end=intervals[i][1];
               temp.clear();
           }

       }
       temp.push_back(start);
       temp.push_back(end);
       ans.push_back(temp);
       return ans;
        
    }
};