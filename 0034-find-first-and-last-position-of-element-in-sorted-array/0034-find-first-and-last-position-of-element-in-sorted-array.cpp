class Solution {
public:
    int lower(vector<int>& nums, int target){
    int s = 0; int l=nums.size()-1;
        int mid= (s+l)/2;
        
        int ans =-1;
        while(s<=l){
            int mid= (s+l)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                l = mid-1;
            }
            else if(nums[mid]<target){
                 s = mid+1;
            }
            else{
                l = mid-1;
            }
        }
        return ans;
        
    }
    
    int upper(vector<int>& nums, int target){
        int s = 0; int l=nums.size()-1;
        int mid= (s+l)/2;
        
        int ans =-1;
        while(s<=l){
            int mid= (s+l)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                s = mid+1;
            }
            else if(nums[mid]<target){
                 s = mid+1;
            }
            else{
                l = mid-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target)
    {
      vector<int>v;
        //Lower Bound (For Finding the first index)
        v.push_back(lower(nums,target));
        //Upper Bound(For finding the last Index)
        v.push_back(upper(nums,target));
        return v;
    }
};