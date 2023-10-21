class Solution {
public:
    string minWindow(string s, string t) {
        int n1=t.length();
        int n2=s.length();
        int i=0,j=0;
        int l;
        int isMatch=0;
        int start,end;
        int min=INT_MAX;
        map<char,int>mp;
        int max=-1;
        for(l=0;l<n1;l++){
            mp[t[l]]++;
        }
        for(j=0;j<n2;j++){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0) {isMatch++;}
                
            }
            //cout<<isMatch;
                if(isMatch==mp.size()){
                
                while(isMatch==mp.size()&&i<=j){
                    if(mp.find(s[i])!=mp.end()){
                   cout<<mp[s[i]];
                    if(mp[s[i]]==0) {isMatch--;i++;}
                    else if(mp[s[i]]<0){mp[s[i]]++; i++;}
                    
                }
                else i++;
                }
                i--; 
                isMatch=mp.size();
                if(j-i+1<min){
                    start=i;
                    end=j;
                    
                    min=end-start+1;
                }

            }
        }
       cout<<start<<end<<"\n";
       if(min==INT_MAX||end<start) return "";
        return s.substr(start,end-start+1);
        
    }
};