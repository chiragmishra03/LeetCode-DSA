class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
    int maxi = *max_element(arr.begin(), arr.end());
    deque<int>dq(arr.begin() , arr.end());
    if (k >= arr.size()) {
        return maxi;
    }
    vector<int> freq(1000001, 0);
    while (true) {
        if (dq[0] > dq[1]) {
          freq[dq[0]]++;
            if (freq[dq[0]] == k) {
                return dq[0];
            }
            dq.push_back(dq[1]);
            swap(dq[1],dq[0]);
            dq.pop_front();
        } 
      else {
           freq[dq[1]]++;
            if (freq[dq[1]] == k) {
                return dq[1];
            }
            dq.push_back(dq[0]);
            swap(arr[1],arr[0]);
            dq.pop_front();
        }
    }
    return 0;
}

};