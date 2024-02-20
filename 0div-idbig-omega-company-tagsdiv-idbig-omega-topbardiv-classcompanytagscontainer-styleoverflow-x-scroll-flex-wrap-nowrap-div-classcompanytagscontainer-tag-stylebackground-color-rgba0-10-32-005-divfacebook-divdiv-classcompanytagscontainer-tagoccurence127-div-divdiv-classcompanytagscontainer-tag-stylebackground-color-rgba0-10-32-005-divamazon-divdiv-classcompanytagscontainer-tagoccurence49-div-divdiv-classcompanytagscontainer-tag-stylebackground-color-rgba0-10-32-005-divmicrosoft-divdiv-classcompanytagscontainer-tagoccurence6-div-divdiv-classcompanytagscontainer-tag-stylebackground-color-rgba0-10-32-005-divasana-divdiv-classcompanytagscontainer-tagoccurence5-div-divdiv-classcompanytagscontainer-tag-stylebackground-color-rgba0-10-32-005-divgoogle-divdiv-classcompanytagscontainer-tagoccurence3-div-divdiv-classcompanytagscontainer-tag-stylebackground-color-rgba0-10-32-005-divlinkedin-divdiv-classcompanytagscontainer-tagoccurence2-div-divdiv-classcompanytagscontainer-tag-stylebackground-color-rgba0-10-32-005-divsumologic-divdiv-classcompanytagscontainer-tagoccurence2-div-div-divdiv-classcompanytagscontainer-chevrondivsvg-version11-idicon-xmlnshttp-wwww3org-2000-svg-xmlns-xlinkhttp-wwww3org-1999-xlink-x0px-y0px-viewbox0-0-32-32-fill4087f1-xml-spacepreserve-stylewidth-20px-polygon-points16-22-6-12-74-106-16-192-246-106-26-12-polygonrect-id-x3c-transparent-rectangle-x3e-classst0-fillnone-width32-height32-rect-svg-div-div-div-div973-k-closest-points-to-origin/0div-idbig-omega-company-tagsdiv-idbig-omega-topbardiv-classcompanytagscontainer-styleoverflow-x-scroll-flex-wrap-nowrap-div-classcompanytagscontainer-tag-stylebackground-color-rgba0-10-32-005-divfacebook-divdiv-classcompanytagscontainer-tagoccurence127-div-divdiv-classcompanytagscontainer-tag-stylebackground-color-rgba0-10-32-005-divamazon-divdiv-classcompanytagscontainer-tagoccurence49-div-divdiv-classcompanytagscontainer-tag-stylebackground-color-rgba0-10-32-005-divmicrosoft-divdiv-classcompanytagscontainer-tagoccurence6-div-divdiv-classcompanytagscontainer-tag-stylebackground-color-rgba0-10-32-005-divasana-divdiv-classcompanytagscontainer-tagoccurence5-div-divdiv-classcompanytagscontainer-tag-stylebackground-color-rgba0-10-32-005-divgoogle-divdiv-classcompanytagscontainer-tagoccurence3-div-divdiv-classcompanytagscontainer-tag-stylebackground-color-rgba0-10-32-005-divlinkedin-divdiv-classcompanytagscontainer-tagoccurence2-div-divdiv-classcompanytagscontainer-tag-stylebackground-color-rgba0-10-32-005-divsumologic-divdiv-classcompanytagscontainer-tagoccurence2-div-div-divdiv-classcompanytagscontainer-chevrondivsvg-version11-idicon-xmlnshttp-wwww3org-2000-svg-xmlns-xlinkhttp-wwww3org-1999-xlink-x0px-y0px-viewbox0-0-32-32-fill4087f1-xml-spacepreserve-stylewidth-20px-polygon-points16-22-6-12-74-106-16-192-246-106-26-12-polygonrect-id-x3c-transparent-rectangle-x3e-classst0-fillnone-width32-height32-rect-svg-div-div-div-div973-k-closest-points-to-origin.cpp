class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,vector<int> > >pq;
        for(auto p:points){
            int x2 = p[0];
            int y2 = p[1];
            int dist = (((0-x2)*(0-x2)) +((0-y2)*(0-y2)));
            pair<int,vector<int>> q =make_pair(dist,p);
            pq.push(q);
        }
        
    vector<vector<int>> result;
        while(pq.size()>k){
        pq.pop();
    }
    while(!pq.empty()){
        result.push_back(pq.top().second);
        pq.pop();
    }

    return result;
    }
};