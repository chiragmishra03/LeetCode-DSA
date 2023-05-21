class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        priority_queue<pair<int, int> > pq;
        for(auto i : mp)
        {
            pq.push(make_pair(i.second , i.first));
        }
        vector<int>v;
        while(k--)
        {
            pair<int, int> top = pq.top();
            v.push_back(top.second);
            pq.pop();
        }
        
        return v;
    }
};