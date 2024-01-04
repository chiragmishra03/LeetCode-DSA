class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int ans=0;
        for(auto x:mp)
        {
            if(x.second==1)return -1;
            int num = x.second;
            while(num>0){
                if(num%3==0){
                    num = num-3;
                    ans++;
                }
                else{
                    num = num-2;
                    ans++;
                }
            }
        }
        return ans;
    }
};