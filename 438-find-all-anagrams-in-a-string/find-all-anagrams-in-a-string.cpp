class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n1=p.length();
        int n2=s.length();
        int i=0,j=0;
        int isMatch=0;
        int l;
        vector<int> v;
        unordered_map<char,int>mp;
        for(l=0;l<n1;l++){
            //if(mp.find(s[l])==mp.end()) mp[p[l]]=0;
            mp[p[l]]++;
        }
        for(j=0;j<n2;j++){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0) isMatch++;
            }
            if(isMatch==mp.size()){
                v.push_back(i);
            }
            if(j>=n1-1){
                if(mp.find(s[i])!=mp.end()){
                    if(mp[s[i]]==0) isMatch--;
                    mp[s[i]]++;

                }
                i++;
            }
        }
        return v;
        
    }
};