class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        int n = nums.size()-1;
        for(int i=0;i<=(n/2);i++){
            int mediate=nums[i]+nums[n-i];
            ans = max(ans,mediate);
        }
        return ans;
    }
};