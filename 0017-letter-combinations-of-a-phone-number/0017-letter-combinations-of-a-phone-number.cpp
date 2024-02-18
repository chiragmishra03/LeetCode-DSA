class Solution {
public:
    vector<string>ans;
    vector<string>mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    void solve(string digits, string cur, int i)
{
	if (i == digits.size()) {
        if(cur.size()>0)
		ans.push_back(cur);
        return;
	}
	int num = digits[i] - '0';
	string s = mapping[num];
	for (int idx = 0 ; idx < s.length(); idx++) {
		solve(digits, cur+s[idx] , i + 1);
	}
}
    
    
    vector<string> letterCombinations(string digits) {
    string cur;
	solve(digits, cur, 0);
        return ans;
    }
};