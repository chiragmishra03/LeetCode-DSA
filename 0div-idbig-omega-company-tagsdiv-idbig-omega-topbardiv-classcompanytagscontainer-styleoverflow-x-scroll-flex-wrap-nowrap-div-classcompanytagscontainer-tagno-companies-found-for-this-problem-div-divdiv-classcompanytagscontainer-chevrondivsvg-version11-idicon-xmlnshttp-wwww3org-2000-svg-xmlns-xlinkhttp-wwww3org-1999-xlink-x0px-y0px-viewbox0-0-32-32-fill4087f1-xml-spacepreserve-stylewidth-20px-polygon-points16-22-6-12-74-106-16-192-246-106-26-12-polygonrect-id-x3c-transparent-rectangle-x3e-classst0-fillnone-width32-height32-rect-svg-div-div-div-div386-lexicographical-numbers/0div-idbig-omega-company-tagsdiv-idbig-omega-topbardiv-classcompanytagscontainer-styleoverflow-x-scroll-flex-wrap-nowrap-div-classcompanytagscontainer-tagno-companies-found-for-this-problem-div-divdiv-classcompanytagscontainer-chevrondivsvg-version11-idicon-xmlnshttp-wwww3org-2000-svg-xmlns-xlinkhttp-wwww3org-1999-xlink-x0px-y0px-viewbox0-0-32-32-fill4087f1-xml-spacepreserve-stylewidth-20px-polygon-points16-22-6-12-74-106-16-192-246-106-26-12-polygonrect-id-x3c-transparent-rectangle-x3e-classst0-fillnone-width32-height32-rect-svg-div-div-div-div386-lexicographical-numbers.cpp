class Solution {
public:

    void solve(int i, int n,vector<int> &ans){
        if(i<=n){
            if(i!=0)
            ans.push_back(i);
        } 
        else{
            return;
        }
        for(int j=0;j<=9;j++){
            if(i==0 && j==0)continue;
            solve(i*10+j,n,ans); 
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int>ans;
        int i=0;
        solve(i,n,ans); 
        return ans;
    }
};