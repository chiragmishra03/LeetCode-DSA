class Solution {
public:
    static bool mycomp(pair<int, int>&a , pair<int, int>&b) {
	if (a.second == b.second) {
		return a.first > b.first;
	}
	return a.second < b.second;
}
    vector<int> frequencySort(vector<int>& arr) {
        vector<pair<int, int>>freq;
	unordered_map<int, int>mp;
	for (int i = 0; i < arr.size(); i++) {
		mp[arr[i]]++;
	}
	for (int i = 0; i < arr.size(); i++) {
		int element = arr[i];
		if (mp.find(element) != mp.end()) {
			auto it = mp.find(element);
			int frequency = it->second;
			int number = it->first;
			mp.erase(it);
			pair<int, int>p = make_pair(number, frequency);
			freq.push_back(p);
		}
	}
	sort(freq.begin(), freq.end(), mycomp);

	vector<int>ans;

	for (auto i : freq) {
		pair<int, int>p = i;

		while (p.second != 0) {
			ans.push_back(p.first);
			p.second--;
		}
	}
        return ans;
    }
};