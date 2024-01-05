#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        set<int> s;
        for (int i = 0; i < n; i++) {
            s.insert(nums[i]);
        }
        vector<int> st(s.begin(), s.end());
        int m = st.size();
        if(m==1) return 1;
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (nums[i - 1] == st[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[n][m];
    }
};

