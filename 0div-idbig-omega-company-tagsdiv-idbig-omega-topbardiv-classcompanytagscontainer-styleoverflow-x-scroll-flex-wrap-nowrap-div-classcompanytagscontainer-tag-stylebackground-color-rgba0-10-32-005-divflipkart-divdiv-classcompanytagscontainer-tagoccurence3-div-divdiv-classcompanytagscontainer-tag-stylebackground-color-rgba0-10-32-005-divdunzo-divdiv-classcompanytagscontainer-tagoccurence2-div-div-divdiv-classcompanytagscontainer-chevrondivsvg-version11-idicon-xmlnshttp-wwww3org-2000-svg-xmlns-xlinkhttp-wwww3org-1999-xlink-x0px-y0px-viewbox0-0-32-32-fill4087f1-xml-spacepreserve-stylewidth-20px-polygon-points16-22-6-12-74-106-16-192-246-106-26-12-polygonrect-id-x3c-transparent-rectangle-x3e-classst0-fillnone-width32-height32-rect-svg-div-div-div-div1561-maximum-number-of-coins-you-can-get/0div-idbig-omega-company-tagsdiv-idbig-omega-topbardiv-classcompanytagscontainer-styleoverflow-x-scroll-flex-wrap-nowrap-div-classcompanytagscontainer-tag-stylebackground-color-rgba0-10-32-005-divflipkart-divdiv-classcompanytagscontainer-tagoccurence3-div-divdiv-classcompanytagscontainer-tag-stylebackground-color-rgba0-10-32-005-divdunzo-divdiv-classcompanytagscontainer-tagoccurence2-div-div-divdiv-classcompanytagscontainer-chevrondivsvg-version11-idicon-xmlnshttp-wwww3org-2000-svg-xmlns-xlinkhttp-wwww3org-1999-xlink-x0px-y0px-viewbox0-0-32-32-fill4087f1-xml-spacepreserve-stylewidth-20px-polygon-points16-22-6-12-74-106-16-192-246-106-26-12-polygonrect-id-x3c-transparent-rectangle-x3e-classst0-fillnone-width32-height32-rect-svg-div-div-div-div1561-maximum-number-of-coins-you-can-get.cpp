class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int alex=piles.size()-1;
        int me = piles.size()-2;
        int fr = 0;
        int ans=0;
        while(alex>fr and me>fr){
            ans+=piles[me];
            alex-=2;
            me-=2;
            fr++;
        }
        return ans;
    }
};