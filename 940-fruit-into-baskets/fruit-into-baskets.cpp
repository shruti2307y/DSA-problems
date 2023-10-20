class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0;
    int r=0;
    int n=fruits.size();
    int c=0;
    int max=0;
    int range=0;
    int k=2;
    map<int,int> mp;
   if(k>n) return n;
    for(int i=0;i<n;i++){
        mp[fruits[i]]=0;
    }
    while(l<n&&r<n&&l<=r){
        while(c<=k&&r<n){
        if(mp[fruits[r]]==0){
            
            
            mp[fruits[r]]++;
            if(c==k) break;
            c++;
            r++;
        }
        else {mp[fruits[r]]++;r++;}
        }
        range=r-l;
       // cout<<range<<"\n";
        if(c<k) return r-l;
        if(range>max) max=range;
  
        while(mp[fruits[l]]-1>0){
            mp[fruits[l]]--;
            l++;
        }
        c=k;
        mp[fruits[l]]--;
        l++;
        r++;
    }
    return max;
        
    }
};