//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	   int i = 0;
	   int j = arr[0].size()-1;
	   int ans=-1;
	   int maxi=0;
	   int cnt=0;
	   while(i<arr.size()){
	       if(arr[i][j]==0)
	       {
	           if(cnt>maxi)
	               {
	                   ans = i;
	                   maxi = cnt;
	               }
	               cnt=0;
	               i++;
	               if(i<arr.size())
	               {
	                    j = arr[i].size()-1;
	               }
	              
	       }
	       else{
	           cnt++;
	           if(j==0)
	           {
	               if(cnt>maxi)
	               {
	                   ans = i;
	                   maxi = cnt;
	               }
	               cnt=0;
	               i++;
	               if(i<arr.size())
	               {
	                    j = arr[i].size()-1;
	               }
	           }
	           else
	           {
	               j--;
	               
	           }
	       }
	   }
	   return ans;
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends