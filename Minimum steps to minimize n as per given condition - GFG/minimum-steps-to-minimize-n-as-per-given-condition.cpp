//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	
	int minSteps1(int N,vector<int>&dp) 
	{ 
	    if(N==1){
	       dp[N] = 0;
	       return 0; 
	    }
	    int x =INT_MAX;
	    int y = INT_MAX;
	    int z = INT_MAX;
	    if(dp[N]!=-1){
	        return dp[N];
	    }
	    x = minSteps1(N-1,dp);
	    if(N%2==0){
	        y = minSteps1(N/2,dp);
	    }
	     if(N%3==0){
	        z = minSteps1(N/3,dp);
	    }
	    dp[N] = min(x,min(y,z))+1;
	    return dp[N];
	} 
	
	int minSteps(int N){
	    vector<int>dp(100000 , -1);
	    return minSteps1(N,dp);
	}
};


//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

       

	    Solution ob;
	    cout << ob.minSteps(n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends