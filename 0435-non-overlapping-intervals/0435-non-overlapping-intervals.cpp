class Solution {
public:

static bool mycomp(pair<int,int>&a , pair<int,int>&b){
    return a.second < b.second;
}
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        vector<pair<int,int>>arr;
        for(int i=0;i<intervals.size();i++){
           arr.push_back(make_pair(intervals[i][0], intervals[i][1]));
        }
        sort(arr.begin(),arr.end(),mycomp);
        int count=0;
        int end = arr[0].second;
        for(int i=1;i<arr.size();i++){
            if(arr[i].first>=end){
                end = arr[i].second;
            }
            else{
                count++;
            }
        }
        return count;
    }
};