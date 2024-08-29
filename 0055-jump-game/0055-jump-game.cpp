class Solution {
public:
    bool canJump(vector<int>& arr) {
        int maxIndex = 0;
        for(int i=0;i<arr.size();i++){
            if(maxIndex==arr.size()-1)return true;
            int num = i+arr[i];
            if(num>maxIndex){
                maxIndex = num;
            }
            if(arr[i]==0 and i==maxIndex)return false;
        }
        return true;
    }
};