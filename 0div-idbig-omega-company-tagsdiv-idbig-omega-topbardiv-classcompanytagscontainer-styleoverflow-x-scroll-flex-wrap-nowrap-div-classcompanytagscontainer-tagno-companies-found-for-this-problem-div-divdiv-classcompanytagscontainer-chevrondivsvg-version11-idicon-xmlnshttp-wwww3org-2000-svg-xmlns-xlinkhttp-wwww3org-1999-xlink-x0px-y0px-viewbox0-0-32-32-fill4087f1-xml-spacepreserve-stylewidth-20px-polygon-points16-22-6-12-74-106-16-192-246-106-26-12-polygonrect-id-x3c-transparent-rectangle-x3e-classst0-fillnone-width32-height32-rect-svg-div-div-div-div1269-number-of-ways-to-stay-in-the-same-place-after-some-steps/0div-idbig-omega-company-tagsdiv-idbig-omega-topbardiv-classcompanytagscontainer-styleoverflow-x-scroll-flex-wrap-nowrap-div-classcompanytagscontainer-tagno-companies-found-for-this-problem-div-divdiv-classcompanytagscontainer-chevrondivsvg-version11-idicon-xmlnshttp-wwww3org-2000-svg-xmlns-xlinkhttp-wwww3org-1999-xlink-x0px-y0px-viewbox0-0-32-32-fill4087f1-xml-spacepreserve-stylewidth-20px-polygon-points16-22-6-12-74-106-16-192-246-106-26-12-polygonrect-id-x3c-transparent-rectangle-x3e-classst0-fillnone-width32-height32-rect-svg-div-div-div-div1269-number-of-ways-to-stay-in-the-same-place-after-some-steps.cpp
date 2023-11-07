class Solution {
  public: const int mod = 1e9 + 7;
  long long dp[510][510];
  long long solve(int steps, int n, int ind) {
    if (steps == 0) return ind == 0;
    if (dp[ind][steps] != -1) return dp[ind][steps];
    long long res = 0;
    if (ind + 1 < n) res += solve(steps - 1, n, ind + 1);
    if (ind - 1 >= 0) res += solve(steps - 1, n, ind - 1);
    res += solve(steps - 1, n, ind);
    return dp[ind][steps] = res % mod;
  }
  int numWays(int steps, int n) {
    memset(dp, -1, sizeof(dp));
    return (int) solve(steps, n, 0);
  }
};