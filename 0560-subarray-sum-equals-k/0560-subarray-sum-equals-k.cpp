class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int>freq(nums.size(),0);
        int sum=0;
        
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            freq[i] = sum;
        }
        int count=0;
        unordered_map<int,int>mp;
        mp[0] = 1; 
        for(int i=0;i<freq.size();i++){
            int rem = freq[i]-k;
                auto it = mp.find(rem);
                if(it!=mp.end()){
                    count+=mp[rem];
                }
            mp[freq[i]]++;
            }
            
        return count;
        
    }
};