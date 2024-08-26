class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        int longestStreak=0;
        int currentStreak=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i]-1)==mp.end())
            {
                currentStreak=1;
                while(mp.find(nums[i]+currentStreak)!=mp.end())
            {
                  currentStreak++;
            }
        }
           
            longestStreak = max(longestStreak,currentStreak);
        }
        
        return longestStreak;
    }
};