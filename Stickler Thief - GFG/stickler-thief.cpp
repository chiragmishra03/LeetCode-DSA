//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int f(int *arr , int n , int ind ,vector<int>&dp){
        if(ind>=n){
            return 0;
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        int pick = arr[ind]+f(arr,n,ind+2,dp);
        int notpick = f(arr,n,ind+1,dp);
        return dp[ind] =  max(pick,notpick);
    }
    
    int FindMaxSum(int arr[], int n)
    {
        int sum = 0 ;
        int ind = 0;
        vector<int>dp(n+1 , -1);
        return f(arr,n,ind,dp);
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
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends