class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        int start = 0,end;
        int i = 0;
        while (i < s.size())
        {
            if (s[i] == ' ')
            {
                start++;
                i++;
            }
            else
            {
                end = start + 1;
                while (s[end] != ' ' && end < s.size())
                {
                    end++;
                }
                st.push(s.substr(start, end -start));
                i =end;
                start = end;
            }
        }
        s.clear();
        while (st.size())
        {
            s.append(st.top());
            st.pop();
            if (st.size() != 0)
            {
                s.append(" ");
            }
        }
        return s;
    
    }
};