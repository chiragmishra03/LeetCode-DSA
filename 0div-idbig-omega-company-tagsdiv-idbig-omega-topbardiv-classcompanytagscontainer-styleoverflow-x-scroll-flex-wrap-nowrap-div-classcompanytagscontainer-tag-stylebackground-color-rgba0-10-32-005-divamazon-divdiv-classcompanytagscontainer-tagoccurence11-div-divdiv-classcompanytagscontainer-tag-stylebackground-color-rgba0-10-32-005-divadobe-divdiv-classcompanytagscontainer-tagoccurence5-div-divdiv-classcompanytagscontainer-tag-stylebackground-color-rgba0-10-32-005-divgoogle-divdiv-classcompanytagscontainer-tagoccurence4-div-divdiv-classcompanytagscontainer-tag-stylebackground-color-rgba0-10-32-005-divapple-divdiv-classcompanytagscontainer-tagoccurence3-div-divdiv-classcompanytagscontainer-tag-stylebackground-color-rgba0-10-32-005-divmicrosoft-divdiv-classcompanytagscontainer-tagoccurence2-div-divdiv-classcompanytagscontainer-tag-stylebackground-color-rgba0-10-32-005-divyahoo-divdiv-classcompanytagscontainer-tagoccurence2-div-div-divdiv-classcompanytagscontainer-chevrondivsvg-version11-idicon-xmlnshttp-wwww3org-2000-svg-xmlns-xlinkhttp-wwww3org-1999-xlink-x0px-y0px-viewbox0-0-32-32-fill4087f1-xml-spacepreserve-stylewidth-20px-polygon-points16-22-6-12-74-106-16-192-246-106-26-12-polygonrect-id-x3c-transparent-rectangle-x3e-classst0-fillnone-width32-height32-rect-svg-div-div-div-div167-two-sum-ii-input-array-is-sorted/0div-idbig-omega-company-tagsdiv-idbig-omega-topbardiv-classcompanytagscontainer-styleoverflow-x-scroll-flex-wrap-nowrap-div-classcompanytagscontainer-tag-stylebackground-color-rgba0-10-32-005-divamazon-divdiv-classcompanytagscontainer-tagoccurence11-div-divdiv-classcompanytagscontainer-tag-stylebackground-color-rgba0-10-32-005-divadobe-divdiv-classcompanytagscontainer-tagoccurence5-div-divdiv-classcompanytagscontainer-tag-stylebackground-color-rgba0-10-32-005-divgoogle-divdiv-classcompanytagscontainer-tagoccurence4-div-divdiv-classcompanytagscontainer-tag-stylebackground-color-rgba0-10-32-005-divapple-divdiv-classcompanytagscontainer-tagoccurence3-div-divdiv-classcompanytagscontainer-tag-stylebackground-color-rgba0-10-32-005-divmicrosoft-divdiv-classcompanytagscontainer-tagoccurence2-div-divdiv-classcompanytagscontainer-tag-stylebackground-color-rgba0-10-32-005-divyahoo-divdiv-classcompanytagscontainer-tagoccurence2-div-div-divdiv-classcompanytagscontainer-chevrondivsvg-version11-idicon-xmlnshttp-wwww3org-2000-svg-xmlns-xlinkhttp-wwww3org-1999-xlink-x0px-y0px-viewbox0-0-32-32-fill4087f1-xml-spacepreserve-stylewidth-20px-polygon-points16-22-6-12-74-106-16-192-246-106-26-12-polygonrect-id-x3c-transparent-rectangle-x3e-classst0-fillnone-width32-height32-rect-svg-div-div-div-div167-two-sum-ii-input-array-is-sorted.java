class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int size=2;
        int [] ans =new int [size];
        int i=0;
        int j=numbers.length-1;
        int k=0;
        while(i<j){
            if(numbers[i]+numbers[j]>target){
                j--;
            }
            else if(numbers[i]+numbers[j]<target){
                i++;
            }
            else{
                ans[k]=i+1;
                k++;
                ans[k]=j+1;
                k++;
                i++;
                j--;
            }
        }
        return ans;
    }
}