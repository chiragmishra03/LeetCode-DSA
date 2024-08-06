class Solution {
    public int[] productExceptSelf(int[] nums) {
        int left[] = new int [nums.length];
        int right[] = new int [nums.length];
        int ans[] = new int[nums.length];
        int multi=nums[0];
        left[0]=1;
        for(int i=1;i<nums.length;i++){
            left[i] = multi;    
            multi*=nums[i];
        }
        multi=nums[nums.length-1];
        right[nums.length-1]=1;
        for(int j=nums.length-2;j>=0;j--){
            right[j]=multi;
            multi*=nums[j];
        }
        for(int i=0;i<nums.length;i++){
            ans[i] = right[i]*left[i];
        }
        return ans;
    }
}