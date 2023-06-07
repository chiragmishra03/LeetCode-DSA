class Solution {
public:
    
int help(int i, vector<int>& nums, int k, unordered_map<int, int>& mp) {
	if (i == nums.size()) { 
		if(!mp.empty()){
            return 1;
        }
        return 0;
	}
	int taken = 0;
	if (!mp[nums[i] - k] && !mp[nums[i]+k])
	{
		mp[nums[i]]++;
		taken = help(i + 1, nums, k, mp);
		mp[nums[i]]--;
	}
	int not_taken = help(i + 1, nums, k, mp);
	return taken + not_taken;
}
int beautifulSubsets(vector<int>& nums, int k) {
       unordered_map<int, int> mp;
       sort(nums.begin(),nums.end());
       return help(0,nums,k,mp)-1;
        
    }
};