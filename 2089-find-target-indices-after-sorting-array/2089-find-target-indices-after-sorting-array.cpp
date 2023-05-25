class Solution {
public:
   vector<int> targetIndices(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    auto lower = lower_bound(nums.begin(), nums.end(), target);
    auto upper = upper_bound(nums.begin(), nums.end(), target);

    int firstOccurrence;
    int lastOccurrence;
vector<int>range;
    // Checking if the target element exists in the vector
    if (lower != nums.end() && *lower == target) {
        firstOccurrence = lower - nums.begin();
        lastOccurrence = upper - nums.begin() - 1;
    } else {
        // Target element not found, return an empty range
        return vector<int>();
    }

    for(int i=firstOccurrence ; i<=lastOccurrence;i++){
range.push_back(i);
    }
    return range;
}};