class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
    unordered_map<int, int> mp;
    for (int num : nums) {
        mp[num]++;
    }
    vector<vector<int>> ans;
    while (!mp.empty()) {
        vector<int> v;
        for (auto it = mp.begin(); it != mp.end();) {
            v.push_back(it->first);
            it->second--;
            if (it->second == 0) {
                it = mp.erase(it);
            } else {
                ++it;
            }
        }
        ans.push_back(v);
        
    }
        return ans;
    }
};