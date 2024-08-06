class Solution {
    public int maxArea(int[] height) {
        int i=0;
        int j=height.length-1;
        int area=0;
        while(i<=j){
            int breadth = j-i;
            int h = Math.min(height[i],height[j]);
            int mid = breadth*h;
            area = Math.max(area,mid);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return area;
    }
}