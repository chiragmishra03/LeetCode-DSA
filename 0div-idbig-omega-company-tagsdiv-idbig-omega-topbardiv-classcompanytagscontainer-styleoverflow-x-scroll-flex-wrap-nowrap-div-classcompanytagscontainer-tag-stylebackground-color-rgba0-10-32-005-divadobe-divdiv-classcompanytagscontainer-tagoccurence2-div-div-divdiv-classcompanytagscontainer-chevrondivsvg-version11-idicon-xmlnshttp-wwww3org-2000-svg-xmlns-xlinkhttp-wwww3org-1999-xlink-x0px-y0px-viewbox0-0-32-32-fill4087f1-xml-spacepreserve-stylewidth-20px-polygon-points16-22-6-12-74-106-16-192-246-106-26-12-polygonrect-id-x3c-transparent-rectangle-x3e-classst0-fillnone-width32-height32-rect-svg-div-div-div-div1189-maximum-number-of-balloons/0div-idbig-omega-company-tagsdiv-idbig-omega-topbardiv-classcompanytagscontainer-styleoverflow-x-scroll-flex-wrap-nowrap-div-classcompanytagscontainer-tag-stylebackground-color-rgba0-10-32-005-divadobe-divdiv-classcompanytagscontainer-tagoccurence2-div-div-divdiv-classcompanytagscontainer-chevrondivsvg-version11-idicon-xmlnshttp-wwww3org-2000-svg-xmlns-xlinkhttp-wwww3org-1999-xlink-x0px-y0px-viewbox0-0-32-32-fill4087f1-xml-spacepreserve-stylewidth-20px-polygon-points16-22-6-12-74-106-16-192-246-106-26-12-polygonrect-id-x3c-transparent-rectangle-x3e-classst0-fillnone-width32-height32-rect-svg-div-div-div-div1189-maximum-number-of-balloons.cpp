class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int ans=0;
        unordered_map<char,int>mp;
        for(int i=0;i<text.length();i++)
        mp[text[i]]++;
    while(1){
        string a="balloon";
        int i=0,l=0;
 for(i=0;i<a.length();i++){
     if(mp[a[i]]>0){
         mp[a[i]]--;
     }else{
l=1;
         break;
     }
 }
 if(i==a.length()){
     ans++;
 }
 if(l==1){
     break;
 }
    }
        return ans;
    }
};