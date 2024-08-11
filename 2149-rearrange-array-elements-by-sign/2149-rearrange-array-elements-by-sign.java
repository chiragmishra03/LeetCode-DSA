class Solution {
    public int[] rearrangeArray(int[] nums) {
        int i=0;
        int j=0;
        int[] ans = new int[nums.length];
        for(;i<nums.length;i++){
            if(nums[i]>0)break;
        }
        for(;j<nums.length;j++){
            if(nums[j]<0)break;
        }
        int k=0;
        while(i<nums.length && j<nums.length){
            if(nums[i]>0){
                ans[k] = nums[i];
                i++;
                k++;
            }
            if(nums[j]<0){
                ans[k] = nums[j];
                j++;
                k++;
            }
            while(i<nums.length && nums[i]<0){
                i++;
            }
            while(j<nums.length && nums[j]>0){
                j++;
            }
        }
        return ans;
    }
}