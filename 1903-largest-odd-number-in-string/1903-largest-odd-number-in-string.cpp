class Solution {
public:
    string largestOddNumber(string num) {
        string s = num;
        int i=num.size()-1;
        while(i>=0)
        {
            int a = s[i]-'0';
            if(a%2==0)
            {
                s.pop_back();
            }
            else
            {
                return s;
            }
            
            i--;
        }
        return s;
    }
};