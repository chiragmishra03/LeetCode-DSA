class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>ans;
        stack<int>st;
        int k = nums.size();
        st.push(-1);
        int i = 2*nums.size()-1;
        for(;i>=0;i--){
            while(st.empty()==false and st.top()<=nums[i%k]){
                st.pop();
            }
            if(st.empty()){
                st.push(-1);
            }
            if(i<nums.size())
            {
            ans.push_back(st.top());    
            }
            st.push(nums[i%k]);
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};