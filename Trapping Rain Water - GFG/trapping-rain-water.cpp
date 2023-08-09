//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        int left[n]={0};
        int right[n] ={0}; 
        long long  int l = 0;
        for(int i=0;i<n;i++){
            left[i] = l;
            if(arr[i]>l){
                l = arr[i];
            }
            
        }
        long long int r= 0;
        for(int i=n-1;i>=0;i--){
                right[i] = r;
                if(arr[i]>r){
                    r = arr[i];
                }
            
        }
       long long int ans = 0;
        for(int i=0;i<n;i++){
            long long int current_water = min(right[i] , left[i]) - arr[i];
            if(current_water<=0)continue;
            ans = current_water+ans;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends