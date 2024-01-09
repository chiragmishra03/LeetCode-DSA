class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int ans = 0;
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i]>arr[i-1] and arr[i]>arr[i+1]){
                int cnt=1;
                int j=i-1;
                while(j>=0 and arr[j]<arr[j+1]){
                    j--;
                    cnt++;
                }
                cout<<cnt<<endl;
                int k=i+1;
                while(k<arr.size() and arr[k]<arr[k-1]){
                    cnt++;
                    k++;
                }
                cout<<cnt<<endl;
                ans = max(ans,cnt);
            }
        }
        return ans;
    }
};