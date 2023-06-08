class Solution {
public:
int findFirstNegative(const vector<int>nums) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] < 0) {
            if (mid == 0 || nums[mid - 1] >= 0) {
                return mid;
            }
            right = mid - 1; 
        } else {
            left = mid + 1;
        }
    }
    
    return -1; // No negative element found
}


    
int countNegatives(vector<vector<int>>& grid) {

    int cnt=0;
    
    for(int i=0;i<grid.size();i++){
        int index = findFirstNegative(grid[i]);
        if(index!=-1){
            cnt+=grid[i].size()-index;
        }
    }
    return cnt;
    }
};