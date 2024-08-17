class Solution {
public:
    vector<string>mp = {"" ,"", "abc" , "def","ghi" , "jkl" , "mno","pqrs" , "tuv" , "wxyz"};

    void func(int i ,string digits,string str,vector<string>&ans){
        if(i==digits.length()){
            ans.push_back(str);
            return;
        }
        int digit = digits[i]-'0';
        string s = mp[digit];
        for(int j=0;j<s.length();j++){
            str.push_back(s[j]);
            func(i+1,digits,str,ans);
            str.pop_back();
        }
        return ;   
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.length()==0)return ans;
        func(0,digits,"",ans);
        return ans;
    }
};