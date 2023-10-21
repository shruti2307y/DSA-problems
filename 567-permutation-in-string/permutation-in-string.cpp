class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int>mp;
        int n1=s1.length();
        int n2=s2.length();
        int i=0;
        int j=0;
        int l;
        int isMatch=0;
        for(i=0;i<n1;i++){
            if(mp.find(s1[i])==mp.end())
            mp[s1[i]]=0;
            mp[s1[i]]++;
        }
        i=0;
       for(j=0;j<n2;j++){
           if(mp.find(s2[j])!=mp.end()){
               mp[s2[j]]--;
               if(mp[s2[j]]==0) isMatch++;
           }
           if(isMatch==mp.size()) return true;

           //shrinking the window once j>pattern length-1
           if(j>=n1-1){
               if(mp.find(s2[i])!=mp.end()){
                   if(mp[s2[i]]==0)
                   isMatch--;
                   mp[s2[i]]++;
               }
                
               i++;
           }
       }
        return false;

        
    }
};