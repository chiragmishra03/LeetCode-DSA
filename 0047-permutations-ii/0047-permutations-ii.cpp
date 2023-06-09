class Solution {
public:
    
    
     void permutations(vector<int>nums,vector<vector<int>>&ans,int i){
        if(i>=nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int j=i;j<nums.size();j++)
        {
            
            if(i!=j && nums[i]==nums[j])continue;
           swap(nums[i],nums[j]);
           permutations(nums,ans,i+1);
        }
        return;
    }
    
    
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
         vector<vector<int>> ans;
        sort(nums.begin() , nums.end());
        permutations(nums,ans,0);
        return ans;
    }
};