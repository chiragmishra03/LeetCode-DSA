class Solution {
public:
    
    bool isVowel(char c)
    {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
    string sortVowels(string s) {
        map<int,int>mp;
        for(int i=0;i<s.size();i++){
            if(isVowel(s[i])){
                mp[s[i]]++;
            }
        }
        auto x = mp.begin();
        for(int i=0;i<s.size();i++){
            if(isVowel(s[i])){
                s[i] = char(x->first);
                x->second--;
                if(x->second==0){
                    x++;
                }
            }
        }
     return s;   
        
    }
};