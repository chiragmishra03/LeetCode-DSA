class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j = height.size()-1;
        int maxi = INT_MIN;
        while(i!=j){
            int h = min(height[i],height[j]);
            int width = j-i;
            int water = width*h;
            maxi = max(water,maxi);
            if(height[i]<height[j]){
                i++;
            }
            else{
j--;
            }
                
        }

        return maxi;

    }
};