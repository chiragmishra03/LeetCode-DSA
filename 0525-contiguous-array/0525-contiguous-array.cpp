class Solution {
public:
    int findMaxLength(vector<int>& arr) {
        int N = arr.size();
         vector<int>freq(N,0);
        int sum=0;
        for(int i=0;i<N;i++){
            int ele=1;
            if(arr[i]==0){
                ele = -1;
            }
            sum = sum + ele;
            freq[i]  = sum;
        }
        unordered_map<int,int>mp;
        int len=0;
        for(int i=0;i<freq.size();i++){
            auto it = mp.find(freq[i]);
            if(freq[i]==0){
                len = max(len , i+1);
            }
            else if(it!=mp.end()){
                len = max(len , i- mp[freq[i]]);
            }
            if(mp.find(freq[i])==mp.end())
            mp[freq[i]]=i;
        }
        return len;
    }
};