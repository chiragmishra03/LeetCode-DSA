class Solution {
public:
    int dp[101][101];
    
    	int minFallingPathSum(vector<vector<int>>& A) {
        int n = A.size();
        
        for(int i=n-2; i>=0; i--)
        {
            for(int j=0; j<n; j++)
            {
                int mini = A[i+1][j];
                if(j > 0)
                    mini = min(mini, A[i+1][j-1]);
                
                if(j < n-1)
                    mini = min(mini, A[i+1][j+1]);
                
                A[i][j] += mini;
            }
        }
        
        int ans = INT_MAX;
        for(int j=0; j<n; j++)
            ans = min(ans,A[0][j]);
        
        return ans;
    }
};