class Solution {
public:
    void solve(int ii , vector<int>&v, vector<vector<int>>&ans,int k,int n){
        if(ii == n+1)
        {
            if(k == 0){
                ans.push_back(v);
                return;
            }
            else{
                return;
            }
        }
        v.push_back(ii);
        solve(ii+1,v,ans,k-1,n);
        v.pop_back();
        solve(ii+1,v,ans,k,n);
}
    
    
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>v;
        solve(1,v,ans,k,n);
        return ans;
    }
};