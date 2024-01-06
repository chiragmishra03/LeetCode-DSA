#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
     vector<int> dp;
    int solve(int i,vector<int>& profit, vector<int>& endTime, vector<int>& startTime) {
        if (i >= startTime.size()) {
            return 0;
        }
        if(dp[i]!=-1)return dp[i];
        //take
        int a = 0;
        int ind = lower_bound(startTime.begin(),startTime.end(),endTime[i])-startTime.begin();
        a = profit[i] + solve(ind , profit, endTime, startTime);
        //skip
        int b = 0 + solve(i + 1,profit, endTime, startTime);
        return dp[i] =  max(b, a);
    }
    
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        for(int i=0;i<=startTime.size();i++){
            dp.push_back(-1);
        }
        set<pair<int, pair<int, int>>> st;
        for(int i=0; i<startTime.size(); i++){
            st.insert({startTime[i], {endTime[i], profit[i]}});
        }
        int i = 0;
        for(auto it: st){
            pair<int, pair<int, int>> p = it;
            startTime[i] = p.first;
            endTime[i] = p.second.first;
            profit[i] = p.second.second;
            i = i + 1;
        }
        return solve(0,profit,endTime,startTime);
    }
};
