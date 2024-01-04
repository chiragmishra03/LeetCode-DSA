class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans = "",finalans = "";
        int status = 0;
        for(int i = 0; i < s.size(); i++){
            ans+=s[i];
            
            
            if(s[i] == '(')
            status++;
            
            
            else
            {
            if(s[i] == ')')
            status--;
            }
            
            if(status < 0)
            {
            ans.pop_back();
            status++;
            }
        }
       if(status==0) return ans;
        for(int i = ans.size()-1; i >= 0 ; i--){
            if(ans[i] == '('){
                if(status == 0) finalans += ans[i];
                else 
            status--;
            }
            else
            finalans += ans[i];
        }
        reverse(finalans.begin(),finalans.end());
        return finalans;   
    }
};