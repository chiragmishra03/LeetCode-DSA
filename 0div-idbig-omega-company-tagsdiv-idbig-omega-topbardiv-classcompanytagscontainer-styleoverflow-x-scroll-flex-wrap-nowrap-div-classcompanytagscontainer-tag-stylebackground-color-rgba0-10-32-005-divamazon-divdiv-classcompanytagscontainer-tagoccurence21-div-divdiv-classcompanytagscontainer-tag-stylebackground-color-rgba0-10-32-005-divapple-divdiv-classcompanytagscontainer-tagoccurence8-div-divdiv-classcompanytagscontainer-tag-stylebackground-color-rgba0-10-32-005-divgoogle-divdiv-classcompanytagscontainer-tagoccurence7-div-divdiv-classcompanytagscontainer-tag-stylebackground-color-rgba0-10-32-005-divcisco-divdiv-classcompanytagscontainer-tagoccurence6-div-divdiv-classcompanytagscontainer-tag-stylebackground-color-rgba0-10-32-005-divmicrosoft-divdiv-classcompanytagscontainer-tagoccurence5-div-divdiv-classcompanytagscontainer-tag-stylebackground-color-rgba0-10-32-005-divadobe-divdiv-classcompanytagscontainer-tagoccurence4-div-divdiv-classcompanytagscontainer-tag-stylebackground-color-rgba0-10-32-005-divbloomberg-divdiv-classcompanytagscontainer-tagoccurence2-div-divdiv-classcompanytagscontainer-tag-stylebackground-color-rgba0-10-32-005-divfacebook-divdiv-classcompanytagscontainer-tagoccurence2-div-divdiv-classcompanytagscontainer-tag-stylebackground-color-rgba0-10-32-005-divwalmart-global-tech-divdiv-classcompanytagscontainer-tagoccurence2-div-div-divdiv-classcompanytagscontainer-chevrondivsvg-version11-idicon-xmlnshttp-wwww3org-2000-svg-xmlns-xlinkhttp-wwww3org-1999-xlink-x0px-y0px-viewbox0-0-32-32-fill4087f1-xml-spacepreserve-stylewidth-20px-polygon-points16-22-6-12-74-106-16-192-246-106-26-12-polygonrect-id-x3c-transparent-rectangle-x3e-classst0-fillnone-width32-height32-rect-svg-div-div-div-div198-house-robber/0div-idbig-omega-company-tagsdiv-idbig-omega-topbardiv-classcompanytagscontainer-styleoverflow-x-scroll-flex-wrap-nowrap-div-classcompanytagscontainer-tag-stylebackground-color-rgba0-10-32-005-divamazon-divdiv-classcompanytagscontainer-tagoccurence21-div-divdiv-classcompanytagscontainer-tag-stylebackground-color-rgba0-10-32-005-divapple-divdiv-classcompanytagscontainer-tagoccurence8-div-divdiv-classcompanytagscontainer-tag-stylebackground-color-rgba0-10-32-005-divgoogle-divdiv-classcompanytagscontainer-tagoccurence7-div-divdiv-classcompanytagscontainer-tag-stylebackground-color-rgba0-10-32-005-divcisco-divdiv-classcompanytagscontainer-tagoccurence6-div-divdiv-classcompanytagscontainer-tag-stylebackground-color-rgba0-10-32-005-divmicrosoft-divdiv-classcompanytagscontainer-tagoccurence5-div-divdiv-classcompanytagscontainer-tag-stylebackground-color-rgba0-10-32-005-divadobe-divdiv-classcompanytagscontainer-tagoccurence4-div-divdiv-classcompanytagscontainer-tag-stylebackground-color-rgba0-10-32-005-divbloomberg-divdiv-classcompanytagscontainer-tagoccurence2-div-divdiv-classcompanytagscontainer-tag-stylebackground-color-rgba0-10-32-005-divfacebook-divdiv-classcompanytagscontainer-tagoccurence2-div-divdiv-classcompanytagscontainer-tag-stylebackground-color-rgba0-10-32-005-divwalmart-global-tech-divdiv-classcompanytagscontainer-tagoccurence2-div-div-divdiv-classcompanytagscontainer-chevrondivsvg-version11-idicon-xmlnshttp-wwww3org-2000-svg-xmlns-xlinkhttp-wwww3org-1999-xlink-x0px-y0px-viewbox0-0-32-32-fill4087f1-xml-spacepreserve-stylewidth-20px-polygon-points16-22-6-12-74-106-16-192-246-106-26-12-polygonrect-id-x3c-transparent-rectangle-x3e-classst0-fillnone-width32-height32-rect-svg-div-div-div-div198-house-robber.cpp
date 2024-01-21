class Solution {
public:
    int f(vector<int>& arr, int n, int ind, vector<int>& dp) {
        if (ind >= n) {
            return 0;
        }
        if (dp[ind] != -1) {
            return dp[ind];
        }
        int pick = arr[ind] + f(arr, n, ind + 2, dp);
        int notpick = f(arr, n, ind + 1, dp);
        dp[ind] = max(pick, notpick);
        return dp[ind];
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) {
            return 0;
        }
        vector<int> dp(n, -1);
        return f(nums, n, 0, dp);
    }
};
