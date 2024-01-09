#include <stack>
#include <string>

class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        for (char digit : num) {
            while (!st.empty() && k > 0 && st.top() > digit) {
                st.pop();
                k--;
            }
            if (st.empty() && digit == '0') {
                continue; 
            }
            st.push(digit);
        }
        
        while (!st.empty() && k > 0) {
            st.pop();
            k--;
        }
        
        if (st.empty()) {
            return "0"; 
        }
        num="";
        while (!st.empty()) {
            num.push_back(st.top());
            st.pop();
        }
        reverse(num.begin(),num.end());
        return num;
    }
};
