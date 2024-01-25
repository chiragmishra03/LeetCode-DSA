class Solution {
public:

	// int lcs(string a , string b , int i , int j, vector<vector<int>>&dp) {
	// 	if (a[i] == '\0' || b[j] == '\0') {
	// 		return 0;
	// 	}
	// 	if (dp[i][j] != -1) {
	// 		return dp[i][j];
	// 	}
	// 	if (a[i] == b[j]) {
	// 		return dp[i][j] = 1 + lcs(a, b, i + 1, j + 1, dp);
	// 	}
	// 	else {
	// 		return dp[i][j] = max(lcs(a, b, i + 1, j, dp), lcs(a, b, i, j + 1, dp));
	// 	}
	// }

	int longestCommonSubsequence(string text1, string text2)
	{
		vector<vector<int>>dp(text1.size()+1, vector<int>(text2.size()+1, 0));
		for (int i = 1; i <= text1.size(); i++) {
			for (int j = 1; j <= text2.size(); j++)
			{
				if (text1[i-1] == text2[j-1]) {
					dp[i][j] = 1 + dp[i - 1][j - 1];
				}
				else {
					dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
				}
			}
		}
		return dp[text1.size()][text2.size()];
	}
};