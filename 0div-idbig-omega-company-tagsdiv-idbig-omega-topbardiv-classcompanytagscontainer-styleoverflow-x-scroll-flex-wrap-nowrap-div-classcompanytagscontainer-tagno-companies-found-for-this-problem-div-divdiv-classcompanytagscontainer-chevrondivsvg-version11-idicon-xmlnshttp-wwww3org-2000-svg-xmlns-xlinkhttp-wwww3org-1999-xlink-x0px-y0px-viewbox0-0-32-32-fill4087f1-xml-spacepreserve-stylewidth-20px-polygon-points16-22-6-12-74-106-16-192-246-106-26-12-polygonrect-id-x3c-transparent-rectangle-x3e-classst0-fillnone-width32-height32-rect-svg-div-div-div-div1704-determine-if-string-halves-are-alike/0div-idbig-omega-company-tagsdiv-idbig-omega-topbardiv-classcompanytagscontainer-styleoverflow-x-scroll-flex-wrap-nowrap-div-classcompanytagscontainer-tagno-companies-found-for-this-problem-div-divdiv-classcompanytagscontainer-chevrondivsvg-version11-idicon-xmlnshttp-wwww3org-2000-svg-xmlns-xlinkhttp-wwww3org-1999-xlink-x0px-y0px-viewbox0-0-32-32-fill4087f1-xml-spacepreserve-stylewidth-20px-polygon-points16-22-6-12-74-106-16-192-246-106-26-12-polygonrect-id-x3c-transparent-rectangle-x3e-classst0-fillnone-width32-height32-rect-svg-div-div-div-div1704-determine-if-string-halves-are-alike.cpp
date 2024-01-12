class Solution {
    private:
    int vowel(string s)
    {
        int c=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == 'a' || s[i]=='e' || s[i] == 'i' || s[i]=='o' || s[i]=='u' || s[i] == 'A' || s[i]=='E' || s[i] == 'I' || s[i]=='O' || s[i]=='U' ) c++;
        }
        return c;
    }
    
    
public:
    bool halvesAreAlike(string s) {
        string p = s.substr(0,s.length()/2);
        string q = s.substr(s.length()/2 , s.length());
      int a =  vowel(p);
      int b = vowel(q);
      if(b==a)return true;
    return false;
        
        
        
        
    }
};