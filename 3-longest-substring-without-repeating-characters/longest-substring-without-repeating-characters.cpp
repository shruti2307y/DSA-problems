class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int i=0,j=0;
        int max=1;
        if(n==0) return 0;
        unordered_map<char,int>mp;
        for(auto it=0;it<n;it++){
            mp[s[it]]=0;
        }
        while(i<n&&j<n){
            cout<<j<<" "<<mp[s[j]];
            if(mp[s[j]]==0)
            {mp[s[j]]++;
            j++;

            cout<<"hello";}
            
            
                else{cout<<j<<" "<<i<<endl;
                while(mp[s[j]]>=1){
                    mp[s[i]]--;
                    i++;
                }
                }
            
            if(j-i>max) max=j-i;

        }
        return max;
        
    }
};