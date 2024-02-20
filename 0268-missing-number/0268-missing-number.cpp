class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
     int i=0;
        while(i<nums.size()){
            int ci = nums[i];
            if(nums[i]==i){
                i++;
            }
            else if(nums[i]==nums.size()){
                i++;
            }
            else{
                swap(nums[i],nums[ci]);
            }
        }
        
        
        
        for(i=0;i<nums.size();i++){
            if(nums[i]!=i){
                return i;
            }
        }
        
        return i;
    }
};