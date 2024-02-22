class Solution {
public:
    
 static bool cmp(const pair<int, string>& a, const pair<int, string>& b) {
        if (a.first == b.first) {
            return a.second < b.second;
        }
        return a.first > b.first;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<pair<int,string>>ans;
        unordered_map<string,int>mp;
        for(int i=0;i<words.size();i++){
            mp[words[i]]++;
        }
        priority_queue<pair<int,string>>pq;
        for(auto i : mp){
            pair<int,string> p = make_pair(i.second , i.first);
            pq.push(p);
        }
        while(!pq.empty()){
            pair<int,string> p = pq.top();
            ans.push_back(p);
            pq.pop();
        }
        sort(ans.begin(),ans.end(),cmp);
        vector<string>finalans;
        for(auto x: ans){
            if(k==0)break;
            finalans.push_back(x.second);
            k--;
        }
        return finalans;
        
    }
};