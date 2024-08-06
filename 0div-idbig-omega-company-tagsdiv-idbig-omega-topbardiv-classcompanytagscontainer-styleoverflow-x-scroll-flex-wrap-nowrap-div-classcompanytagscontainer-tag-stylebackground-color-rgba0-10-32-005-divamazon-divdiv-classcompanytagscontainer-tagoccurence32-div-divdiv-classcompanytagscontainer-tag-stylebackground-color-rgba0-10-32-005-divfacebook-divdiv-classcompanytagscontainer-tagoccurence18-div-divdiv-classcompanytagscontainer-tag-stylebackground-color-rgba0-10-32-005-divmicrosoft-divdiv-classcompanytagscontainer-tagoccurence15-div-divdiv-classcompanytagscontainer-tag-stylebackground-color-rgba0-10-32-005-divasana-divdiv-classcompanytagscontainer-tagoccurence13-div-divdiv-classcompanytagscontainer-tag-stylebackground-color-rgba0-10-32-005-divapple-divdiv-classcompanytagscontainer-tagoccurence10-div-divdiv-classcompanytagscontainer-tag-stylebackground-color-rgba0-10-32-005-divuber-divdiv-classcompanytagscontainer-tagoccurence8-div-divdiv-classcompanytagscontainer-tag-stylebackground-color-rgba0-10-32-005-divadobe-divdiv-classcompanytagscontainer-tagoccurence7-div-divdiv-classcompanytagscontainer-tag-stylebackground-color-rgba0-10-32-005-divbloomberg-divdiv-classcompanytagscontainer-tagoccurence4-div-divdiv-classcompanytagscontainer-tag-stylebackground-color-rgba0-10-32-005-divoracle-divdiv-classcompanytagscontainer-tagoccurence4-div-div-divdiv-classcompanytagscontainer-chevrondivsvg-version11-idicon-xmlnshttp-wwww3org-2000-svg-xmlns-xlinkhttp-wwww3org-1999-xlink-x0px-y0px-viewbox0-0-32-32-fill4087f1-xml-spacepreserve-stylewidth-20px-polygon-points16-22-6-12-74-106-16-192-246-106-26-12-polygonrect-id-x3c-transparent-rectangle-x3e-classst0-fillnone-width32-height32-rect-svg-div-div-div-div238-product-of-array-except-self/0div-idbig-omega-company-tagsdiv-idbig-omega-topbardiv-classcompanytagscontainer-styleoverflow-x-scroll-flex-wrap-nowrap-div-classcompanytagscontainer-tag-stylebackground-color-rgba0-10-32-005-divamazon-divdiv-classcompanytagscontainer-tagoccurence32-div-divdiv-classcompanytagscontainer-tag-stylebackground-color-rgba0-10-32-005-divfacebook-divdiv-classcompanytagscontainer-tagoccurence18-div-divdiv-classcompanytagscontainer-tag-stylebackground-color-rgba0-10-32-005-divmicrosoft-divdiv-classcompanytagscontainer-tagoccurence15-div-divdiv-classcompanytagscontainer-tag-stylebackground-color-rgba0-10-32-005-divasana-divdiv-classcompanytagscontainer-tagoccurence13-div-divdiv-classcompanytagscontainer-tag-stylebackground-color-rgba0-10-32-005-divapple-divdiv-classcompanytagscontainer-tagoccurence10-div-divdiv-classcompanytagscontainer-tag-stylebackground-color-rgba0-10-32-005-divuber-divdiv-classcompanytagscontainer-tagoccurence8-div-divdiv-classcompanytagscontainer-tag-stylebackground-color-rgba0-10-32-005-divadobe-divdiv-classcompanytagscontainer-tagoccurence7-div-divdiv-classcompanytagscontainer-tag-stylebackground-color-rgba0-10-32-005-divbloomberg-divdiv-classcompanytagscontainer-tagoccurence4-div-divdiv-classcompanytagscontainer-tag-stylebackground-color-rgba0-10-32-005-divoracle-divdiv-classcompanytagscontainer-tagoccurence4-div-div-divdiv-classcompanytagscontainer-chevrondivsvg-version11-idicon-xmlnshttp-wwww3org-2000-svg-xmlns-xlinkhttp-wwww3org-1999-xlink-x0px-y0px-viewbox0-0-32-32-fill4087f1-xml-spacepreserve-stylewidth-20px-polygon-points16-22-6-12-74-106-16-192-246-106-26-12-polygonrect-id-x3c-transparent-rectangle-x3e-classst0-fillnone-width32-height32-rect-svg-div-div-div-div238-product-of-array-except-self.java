class Solution {
    public int[] productExceptSelf(int[] nums) {
        int ans[] = new int[nums.length];
        int multi=nums[0];
        ans[0]=1;
        for(int i=1;i<nums.length;i++){
            ans[i] = multi;    
            multi*=nums[i];
        }
        multi=nums[nums.length-1];
        for(int j=nums.length-2;j>=0;j--){
            ans[j]= ans[j]*multi;
            multi*=nums[j];
        }
        return ans;
    }
}