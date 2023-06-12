class Solution {
public:
    
void help(vector<string>&ans ,  int open, int close, string&in) {
	if (open == 0 && close == 0) {
		ans.push_back(in);
		return;
	}
	if (open > 0) {
		in.push_back('(');
		help(ans,open - 1, close, in);
		in.pop_back();

	}

	if (close > 0 && open < close) {
		in.push_back(')');
		help(ans,open, close - 1, in);
		in.pop_back();
	}
	return;
}
    
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string in;
        help(ans,n,n,in);
        return ans;
        
    }
};