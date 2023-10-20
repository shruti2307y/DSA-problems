class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        int l=0,r=0;
        int res;
        int max=0;
        unordered_map<char,int>mp;
        int maxf=1;
        mp[s[0]]=1;
        while(r<n){
           
            
            while(r-l+1-maxf<=k&&r<n){
                
                
                r++;
                mp[s[r]]++;
                if(mp[s[r]]>maxf) maxf=mp[s[r]];
            }
                
                if(r-l>max) max=r-l;
            
            
                
                while(r-l+1-maxf>k&&l<n)
                {mp[s[l]]--;
                l++;}
            
        }
        return max;
        
    }
};