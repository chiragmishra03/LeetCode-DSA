class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       long long  int leftsum = nums[0];
       long long int rightsum = nums[nums.size()-1];
       long long int left[100000]={0};
      long long  int right[100000]={0};
        for(int i=1;i<nums.size();i++){
            left[i] = leftsum;
            leftsum = leftsum+nums[i];
        }
        for(int i=nums.size()-2;i>=0;i--){
            right[i] = rightsum;
            rightsum = rightsum+nums[i];
        }
        
        for(int i=0;i<nums.size();i++){
            if(left[i]==right[i]){
                return i;
            }
        }
        
        
        return -1;
        
    }
};