class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int lo = 0;
        int hi = arr.size() - 1;

        if (arr[lo] > arr[lo + 1])
            return lo;
        
        if (arr[hi] > arr[hi - 1])
            return hi;

        while (lo <= hi) {
            int mid = lo + ((hi - lo) >> 1);

            if (mid!=0 && arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
                return mid;
            }
            else if (mid!=0 && arr[mid] < arr[mid - 1]) {
                hi = mid - 1;
            }
            else {
                lo = mid + 1;
            }
        }
        
        return -1;
    }
};
