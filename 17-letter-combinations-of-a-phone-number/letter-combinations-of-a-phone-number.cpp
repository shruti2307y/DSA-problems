class Solution {
public:
    void findComb(string digits, int index,vector<string>&ans,vector<string>mp,string output){
        if(index==digits.size()){
            ans.push_back(output);
            return;
        }
        int num=digits[index]-'0';
        string options=mp[num];
        for(int i=0;i<options.size();i++){
            output+=options[i];
            findComb(digits,index+1,ans,mp,output);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        int index=0;
        vector<string>ans;
        if(digits.length()==0){
            return ans;
        }
        vector<string>mp={"","","abc","def","ghi", "jkl","mno","pqrs", "tuv","wxyz"};
        
        string output="";
        findComb(digits,index,ans,mp,output);
        
        return ans;
        
    }
};