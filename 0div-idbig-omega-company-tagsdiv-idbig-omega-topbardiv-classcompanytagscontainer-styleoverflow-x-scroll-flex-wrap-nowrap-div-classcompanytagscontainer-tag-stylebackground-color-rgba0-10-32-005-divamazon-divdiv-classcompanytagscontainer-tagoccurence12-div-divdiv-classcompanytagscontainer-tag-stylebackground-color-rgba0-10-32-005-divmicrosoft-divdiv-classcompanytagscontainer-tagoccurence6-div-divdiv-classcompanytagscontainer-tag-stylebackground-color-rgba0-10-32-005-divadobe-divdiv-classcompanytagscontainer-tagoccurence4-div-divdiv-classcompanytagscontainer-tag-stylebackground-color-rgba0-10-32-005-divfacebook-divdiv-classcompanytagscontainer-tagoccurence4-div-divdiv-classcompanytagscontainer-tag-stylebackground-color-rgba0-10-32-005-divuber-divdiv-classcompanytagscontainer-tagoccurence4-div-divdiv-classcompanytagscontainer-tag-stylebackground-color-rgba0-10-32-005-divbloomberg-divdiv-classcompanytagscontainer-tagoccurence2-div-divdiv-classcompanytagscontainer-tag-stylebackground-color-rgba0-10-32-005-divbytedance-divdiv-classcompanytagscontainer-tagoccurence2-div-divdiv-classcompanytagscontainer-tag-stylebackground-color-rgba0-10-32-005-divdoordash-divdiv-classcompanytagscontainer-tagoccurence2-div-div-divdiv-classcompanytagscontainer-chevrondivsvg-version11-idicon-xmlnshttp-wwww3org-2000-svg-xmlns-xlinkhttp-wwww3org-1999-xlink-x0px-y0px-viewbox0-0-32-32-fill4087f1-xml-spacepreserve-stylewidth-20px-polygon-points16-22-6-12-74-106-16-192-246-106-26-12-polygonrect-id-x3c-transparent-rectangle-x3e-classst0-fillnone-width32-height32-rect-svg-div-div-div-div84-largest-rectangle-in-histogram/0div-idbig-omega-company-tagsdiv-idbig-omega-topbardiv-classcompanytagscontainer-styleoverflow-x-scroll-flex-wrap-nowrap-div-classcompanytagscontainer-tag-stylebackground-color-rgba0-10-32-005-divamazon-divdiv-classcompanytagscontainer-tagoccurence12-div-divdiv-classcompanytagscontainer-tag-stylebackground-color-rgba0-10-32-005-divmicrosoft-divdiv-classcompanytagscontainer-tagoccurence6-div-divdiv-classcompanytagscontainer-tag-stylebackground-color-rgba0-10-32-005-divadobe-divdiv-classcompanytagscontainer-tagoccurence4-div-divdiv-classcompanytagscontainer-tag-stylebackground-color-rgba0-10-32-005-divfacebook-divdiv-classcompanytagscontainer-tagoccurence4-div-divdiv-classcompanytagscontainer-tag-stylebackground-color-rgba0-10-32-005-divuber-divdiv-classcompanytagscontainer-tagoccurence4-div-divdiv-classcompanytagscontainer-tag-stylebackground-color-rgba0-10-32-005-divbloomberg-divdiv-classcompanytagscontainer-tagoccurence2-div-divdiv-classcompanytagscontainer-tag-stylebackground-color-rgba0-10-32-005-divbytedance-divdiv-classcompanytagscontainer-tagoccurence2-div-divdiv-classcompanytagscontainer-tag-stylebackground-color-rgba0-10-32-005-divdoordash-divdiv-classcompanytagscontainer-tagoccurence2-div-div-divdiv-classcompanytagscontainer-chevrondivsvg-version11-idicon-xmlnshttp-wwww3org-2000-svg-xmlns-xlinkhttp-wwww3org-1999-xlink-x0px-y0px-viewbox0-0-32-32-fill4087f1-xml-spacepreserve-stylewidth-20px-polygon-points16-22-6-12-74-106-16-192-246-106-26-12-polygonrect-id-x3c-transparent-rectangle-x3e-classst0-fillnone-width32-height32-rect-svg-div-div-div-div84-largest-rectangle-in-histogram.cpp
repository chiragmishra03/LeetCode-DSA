class Solution {
public:
    vector<int> smaller(vector<int>&heights , int start){
        vector<int>ans;
        if(start==0){
            stack<int>st;
            st.push(0);
            ans.push_back(-1);
             for(int i=1;i<heights.size();i++){
            while(!st.empty() and heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(st.empty()){
                ans.push_back(-1);
            }
            else{
                ans.push_back(st.top());
            }
            st.push(i);
        }
        }
        else{
        stack<int>st;
        st.push(start-1);
        ans.push_back(-1);
              for(int i=start-2;i>=0;i--){
            while(!st.empty() and heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(st.empty()){
                ans.push_back(-1);
            }
            else{
                ans.push_back(st.top());
            }
            st.push(i);
        }
            reverse(ans.begin(),ans.end());
        }
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
        if(heights.size()==1)return heights[0];
        vector<int>leftsmaller = smaller(heights,0);
        vector<int>rightsmaller = smaller(heights,heights.size());
        int area = INT_MIN;
        for(int i=0;i<heights.size();i++){
            int len = heights[i];
            int first = leftsmaller[i];
            int last = rightsmaller[i];
            if(last==-1)last = heights.size();
            int breadth = last-first-1;
            int currentarea = len*breadth;
            area = max(currentarea , area);
        }
        return area;
    }
};