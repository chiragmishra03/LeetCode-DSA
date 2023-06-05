class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }
        int lo = 0;
        int n = nums.size()-1;
        int hi = n;
        while(lo<=hi){
           int mid =  lo + (hi-lo)/2;
            
            if( (mid!=0 && mid!=n) && (nums[mid] > nums[mid-1] &&
              nums[mid] > nums[mid+1]) ){
                return mid;
            }
            else if(mid==0 && nums[mid]<nums[mid+1]){
                lo = mid+1;
            }
            else if(mid==0 && nums[mid]>nums[mid+1]){
                return mid;
            }
            else if(mid==n && nums[mid-1]<nums[mid]){
                return mid;
            }
            else if(nums[mid-1]>nums[mid]){
                hi = mid-1;
            }
            else{
                lo = mid+1;
            }
        }
        return nums[n];
    }
};