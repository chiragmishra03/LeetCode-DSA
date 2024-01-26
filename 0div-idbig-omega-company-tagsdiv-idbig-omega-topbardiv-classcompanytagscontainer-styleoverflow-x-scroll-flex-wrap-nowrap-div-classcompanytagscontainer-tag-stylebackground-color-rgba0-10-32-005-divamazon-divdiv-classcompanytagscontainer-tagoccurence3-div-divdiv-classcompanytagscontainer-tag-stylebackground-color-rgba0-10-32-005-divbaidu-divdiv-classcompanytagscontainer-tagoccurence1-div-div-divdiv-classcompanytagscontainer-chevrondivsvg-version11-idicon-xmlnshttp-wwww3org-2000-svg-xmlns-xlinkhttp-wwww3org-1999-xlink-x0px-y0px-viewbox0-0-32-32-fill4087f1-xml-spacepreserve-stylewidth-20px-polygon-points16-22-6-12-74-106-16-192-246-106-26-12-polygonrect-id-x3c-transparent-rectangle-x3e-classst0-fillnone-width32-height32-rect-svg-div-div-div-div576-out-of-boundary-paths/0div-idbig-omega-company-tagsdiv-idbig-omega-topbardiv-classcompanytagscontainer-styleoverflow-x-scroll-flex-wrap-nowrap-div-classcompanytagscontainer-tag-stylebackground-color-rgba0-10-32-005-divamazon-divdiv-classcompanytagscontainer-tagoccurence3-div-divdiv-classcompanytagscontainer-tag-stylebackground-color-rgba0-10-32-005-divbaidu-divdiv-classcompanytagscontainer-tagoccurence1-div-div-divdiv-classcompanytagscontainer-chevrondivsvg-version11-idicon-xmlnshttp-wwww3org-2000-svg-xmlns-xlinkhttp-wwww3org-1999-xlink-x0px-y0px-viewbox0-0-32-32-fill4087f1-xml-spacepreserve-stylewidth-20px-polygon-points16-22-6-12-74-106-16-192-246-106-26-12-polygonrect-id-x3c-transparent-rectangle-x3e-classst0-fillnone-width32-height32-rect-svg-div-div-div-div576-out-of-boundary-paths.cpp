class Solution {
public:
    int mod = 1e9 + 7;

    int findPaths(int m, int n, int move, int row, int col) {
        vector<vector<vector<int>>> dp(m + 2,vector<vector<int>>(n + 2,vector<int>(move + 1,0)));
        for(int i = 0;i< m + 2;i++){
            for(int k = 0;k < move + 1;k++){
                dp[i][0][k] = 1;
                dp[i][n + 1][k] = 1;
            }
        }
        for(int j = 0;j < n + 2;j++){
            for(int k = 0;k < move + 1;k++){
                dp[0][j][k] = 1;
                dp[m + 1][j][k] = 1;
            }
        }
        for(int k = 1;k < move + 1;k++){
            for(int i = 1;i < m + 1;i++){
                for(int j = 1;j < n + 1;j++){
                    int ans = 0;
                    ans += dp[i + 1][j][k - 1];
                    ans %= mod;
                    ans += dp[i - 1][j][k - 1];
                    ans %= mod;
                    ans += dp[i][j - 1][k - 1];
                    ans %= mod;
                    ans += dp[i][j + 1][k - 1];
                    ans %= mod;

                    dp[i][j][k] = ans;
                }
            }
        }

        return dp[row + 1][col + 1][move];
    }
};