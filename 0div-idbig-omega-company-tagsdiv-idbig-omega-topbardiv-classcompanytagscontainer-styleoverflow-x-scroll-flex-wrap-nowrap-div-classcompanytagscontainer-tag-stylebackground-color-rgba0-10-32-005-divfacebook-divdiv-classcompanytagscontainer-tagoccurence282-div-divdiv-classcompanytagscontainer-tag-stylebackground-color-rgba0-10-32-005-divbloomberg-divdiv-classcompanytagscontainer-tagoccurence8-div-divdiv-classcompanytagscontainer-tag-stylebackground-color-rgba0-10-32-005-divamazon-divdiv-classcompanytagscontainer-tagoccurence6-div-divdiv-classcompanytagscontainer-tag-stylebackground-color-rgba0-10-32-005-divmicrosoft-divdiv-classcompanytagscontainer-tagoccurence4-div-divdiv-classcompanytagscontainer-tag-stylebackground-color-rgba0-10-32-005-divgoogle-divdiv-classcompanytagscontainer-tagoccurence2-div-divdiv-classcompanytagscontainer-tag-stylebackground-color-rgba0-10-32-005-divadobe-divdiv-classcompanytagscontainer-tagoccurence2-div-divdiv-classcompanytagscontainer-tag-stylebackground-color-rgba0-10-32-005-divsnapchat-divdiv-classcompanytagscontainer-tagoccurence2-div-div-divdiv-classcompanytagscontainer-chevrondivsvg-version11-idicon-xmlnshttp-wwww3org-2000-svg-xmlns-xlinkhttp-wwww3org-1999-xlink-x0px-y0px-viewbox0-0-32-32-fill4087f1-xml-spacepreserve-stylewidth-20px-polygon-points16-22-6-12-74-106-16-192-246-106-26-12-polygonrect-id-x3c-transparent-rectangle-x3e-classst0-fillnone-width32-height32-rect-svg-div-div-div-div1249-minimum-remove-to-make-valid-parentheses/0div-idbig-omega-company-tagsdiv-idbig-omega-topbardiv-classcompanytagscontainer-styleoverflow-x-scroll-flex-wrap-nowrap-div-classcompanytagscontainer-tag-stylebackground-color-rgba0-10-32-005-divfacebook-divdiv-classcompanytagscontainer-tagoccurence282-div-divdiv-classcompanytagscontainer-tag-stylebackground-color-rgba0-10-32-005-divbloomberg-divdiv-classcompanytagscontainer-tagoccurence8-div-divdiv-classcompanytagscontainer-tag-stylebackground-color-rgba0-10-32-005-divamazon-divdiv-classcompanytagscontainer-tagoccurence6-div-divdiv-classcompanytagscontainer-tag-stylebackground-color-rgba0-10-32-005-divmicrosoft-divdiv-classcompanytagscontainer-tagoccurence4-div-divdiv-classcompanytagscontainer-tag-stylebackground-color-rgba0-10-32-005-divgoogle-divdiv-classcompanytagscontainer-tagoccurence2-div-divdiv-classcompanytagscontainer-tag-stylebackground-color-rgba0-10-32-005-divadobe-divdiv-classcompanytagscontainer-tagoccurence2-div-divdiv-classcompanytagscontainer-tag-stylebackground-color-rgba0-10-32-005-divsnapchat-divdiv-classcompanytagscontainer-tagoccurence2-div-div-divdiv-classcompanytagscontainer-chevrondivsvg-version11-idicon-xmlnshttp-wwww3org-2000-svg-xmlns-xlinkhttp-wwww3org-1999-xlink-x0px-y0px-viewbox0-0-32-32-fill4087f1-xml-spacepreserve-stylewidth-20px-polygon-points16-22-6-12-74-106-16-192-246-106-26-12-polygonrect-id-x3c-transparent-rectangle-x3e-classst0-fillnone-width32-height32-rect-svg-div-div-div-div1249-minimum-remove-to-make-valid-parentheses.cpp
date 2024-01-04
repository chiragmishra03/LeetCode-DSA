class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans = "",finalans = "";
        int status = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(')status++;
            else if(s[i]==')'){
               if(status>0){
                   status--;
               } 
                else{
                    s[i]='/';
                }
            }
            if(s[i]!='/')ans+=s[i];
        }
       if(status==0)return ans;
        int c = 0;  
        for(int i=ans.size()-1;i>=0;i--){
            if(ans[i]==')'){
                c++;
            }
            else if(ans[i]=='('){
                if(c>0){
                    c--;
                }
                else{
                    ans[i]='/';
                }
            }
            if(ans[i]!='/')finalans+=ans[i];
        }
        
     reverse(finalans.begin(),finalans.end());
        return finalans;
    }
};