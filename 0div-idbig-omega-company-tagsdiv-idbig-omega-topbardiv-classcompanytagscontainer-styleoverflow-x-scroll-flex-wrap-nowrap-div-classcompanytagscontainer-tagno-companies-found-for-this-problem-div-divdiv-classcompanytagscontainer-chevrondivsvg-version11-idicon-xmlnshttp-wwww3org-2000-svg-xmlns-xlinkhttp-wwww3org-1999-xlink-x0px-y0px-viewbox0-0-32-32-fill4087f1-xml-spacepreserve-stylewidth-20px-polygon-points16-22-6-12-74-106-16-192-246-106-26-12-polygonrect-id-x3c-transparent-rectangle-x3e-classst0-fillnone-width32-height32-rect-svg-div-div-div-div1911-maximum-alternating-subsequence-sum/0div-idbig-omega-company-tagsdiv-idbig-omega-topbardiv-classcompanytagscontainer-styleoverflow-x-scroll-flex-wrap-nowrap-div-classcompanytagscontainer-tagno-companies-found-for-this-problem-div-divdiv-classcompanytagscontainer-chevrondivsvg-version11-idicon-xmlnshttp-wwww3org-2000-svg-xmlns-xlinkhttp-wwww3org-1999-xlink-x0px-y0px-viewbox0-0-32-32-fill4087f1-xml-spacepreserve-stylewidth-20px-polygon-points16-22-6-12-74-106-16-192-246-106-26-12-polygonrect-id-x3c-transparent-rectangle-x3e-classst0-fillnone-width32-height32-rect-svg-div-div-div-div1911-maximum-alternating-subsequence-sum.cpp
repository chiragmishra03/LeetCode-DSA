class Solution {
public:
  long long dp[100006][2];
  long long int solve(vector<int> &nums,bool flag,int i){
    if(i<0){
      return 0;
    }
    if(dp[i][flag] != -1) return dp[i][flag];
    long long int skip = solve(nums,flag,i-1)+0;
    long long int val = nums[i];
    if(flag==false)
    {
      val = nums[i]*-1;
    }
    long long int take = solve(nums,!flag,i-1)+val;
    return dp[i][flag] = max(take,skip);
  }
    long long maxAlternatingSum(vector<int>& nums) {
     memset(dp,-1,sizeof(dp));
     return solve(nums,1,nums.size()-1) ;
    }
};