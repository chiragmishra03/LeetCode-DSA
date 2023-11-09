class Solution {
public:
  int mod = 1e9+7;
    int countHomogenous(string s) {
      int count = 0;
      int prev =1;
      for(int i=0;i<s.size();i++)
      {
        if(i>0 and s[i]==s[i-1]){
          prev+=1;
        }
        else{
          prev = 1;
        }
        count = ((count%mod) + (prev%mod));
      }
      return count%mod;
    }
};