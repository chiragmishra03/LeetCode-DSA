//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    // int solve(int W, int wt[], int val[], int n,int i)
    // { 
        
    //     if(W==0 || i<0){
    //         return 0;
    //     }
    //     if( dp[i][W] !=-1){
    //         return  dp[i][W] ;
    //     }
    //     int ans1;
    //     int ans2;
    //     int ans3;
    //     if(W>=wt[i]){
    //         //include
    //       ans1 = val[i]+solve(W-wt[i] , wt, val,n,i-1);
    //       //exclude
    //       ans2 = solve(W , wt, val , n , i-1);
    //       return dp[i][W] = max(ans1 , ans2);
            
    //     }
    //     else{
    //         ans3 = solve(W , wt, val , n , i-1);
    //         return  dp[i][W] =  ans3;
    //     }
    // }
    
    int bottomup(int W, int wt[], int val[], int n) {
	int dp[1001][1001];
	memset(dp , 0 , sizeof dp);

	int ans1 , ans2, ans3;
	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < W + 1; j++) {
			if (j >= wt[i - 1]) {
				dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
			}
			else {
				dp[i][j] =  dp[i - 1][j];
			}

		}
	}

	return dp[n][W];


}
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        return bottomup(W , wt,val,n);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends