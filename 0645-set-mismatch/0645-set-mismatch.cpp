class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
          vector<int>ans;
        int i=0;
    while(i<nums.size())
    {
        int ci = nums[i]-1;
        
        if(nums[i] == nums[ci]){ i++; }
        else{
           swap(nums[i],nums[ci]);
        }
    }
      for(int i=0;i<nums.size();i++){
          if(i+1!=nums[i]){
              return {nums[i],i+1};
          }
      }
        
        
        return ans;
        
       
    }
};