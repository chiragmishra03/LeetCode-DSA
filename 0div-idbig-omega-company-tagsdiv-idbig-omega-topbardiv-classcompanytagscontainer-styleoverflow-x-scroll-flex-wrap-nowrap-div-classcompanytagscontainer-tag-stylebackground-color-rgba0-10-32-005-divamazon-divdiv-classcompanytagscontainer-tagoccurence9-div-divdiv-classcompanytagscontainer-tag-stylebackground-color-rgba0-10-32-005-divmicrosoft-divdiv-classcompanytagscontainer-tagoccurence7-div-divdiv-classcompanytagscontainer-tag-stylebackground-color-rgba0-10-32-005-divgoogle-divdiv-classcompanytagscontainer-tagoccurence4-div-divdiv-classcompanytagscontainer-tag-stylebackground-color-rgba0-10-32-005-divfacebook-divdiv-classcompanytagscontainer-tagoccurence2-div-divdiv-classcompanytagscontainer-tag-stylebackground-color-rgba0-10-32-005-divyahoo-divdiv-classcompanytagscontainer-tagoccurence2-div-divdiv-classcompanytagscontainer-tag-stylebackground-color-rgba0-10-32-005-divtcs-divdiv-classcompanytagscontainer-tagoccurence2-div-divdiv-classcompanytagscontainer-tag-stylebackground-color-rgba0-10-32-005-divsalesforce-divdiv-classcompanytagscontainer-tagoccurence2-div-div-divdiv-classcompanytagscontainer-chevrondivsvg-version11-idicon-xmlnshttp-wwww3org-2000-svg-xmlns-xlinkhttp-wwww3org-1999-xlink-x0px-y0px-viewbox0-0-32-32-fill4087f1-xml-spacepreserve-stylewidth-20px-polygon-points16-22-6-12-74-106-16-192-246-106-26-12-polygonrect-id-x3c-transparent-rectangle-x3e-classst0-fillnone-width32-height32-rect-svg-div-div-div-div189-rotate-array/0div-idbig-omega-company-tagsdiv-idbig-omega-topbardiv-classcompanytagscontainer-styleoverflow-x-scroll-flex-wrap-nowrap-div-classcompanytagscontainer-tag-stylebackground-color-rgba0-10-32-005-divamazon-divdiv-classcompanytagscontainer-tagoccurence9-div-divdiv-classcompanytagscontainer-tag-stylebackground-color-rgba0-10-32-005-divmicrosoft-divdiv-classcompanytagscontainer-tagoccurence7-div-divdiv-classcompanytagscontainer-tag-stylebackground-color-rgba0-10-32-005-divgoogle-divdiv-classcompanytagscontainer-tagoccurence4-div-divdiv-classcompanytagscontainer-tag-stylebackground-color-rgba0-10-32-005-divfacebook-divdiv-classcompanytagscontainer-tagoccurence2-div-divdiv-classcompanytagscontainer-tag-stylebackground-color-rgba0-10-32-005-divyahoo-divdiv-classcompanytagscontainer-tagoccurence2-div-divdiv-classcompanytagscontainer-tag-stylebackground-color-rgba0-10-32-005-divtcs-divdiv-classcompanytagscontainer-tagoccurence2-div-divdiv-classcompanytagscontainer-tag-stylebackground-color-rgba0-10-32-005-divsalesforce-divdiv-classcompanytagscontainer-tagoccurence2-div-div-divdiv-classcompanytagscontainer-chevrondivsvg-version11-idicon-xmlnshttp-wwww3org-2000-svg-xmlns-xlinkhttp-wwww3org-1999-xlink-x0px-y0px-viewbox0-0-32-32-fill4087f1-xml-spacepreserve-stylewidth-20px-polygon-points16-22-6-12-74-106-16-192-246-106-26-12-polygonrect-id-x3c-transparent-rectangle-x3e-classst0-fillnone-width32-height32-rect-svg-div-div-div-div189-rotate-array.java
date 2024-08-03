class Solution {

static int[] reverseArray(int i,int j,int arr[]){
while(i<=j){
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
}
return arr;
}
    public void rotate(int[] nums, int k) {
        k = k %nums.length;
        nums = reverseArray(0,nums.length-1,nums);
        nums = reverseArray(0,k-1,nums);
        nums = reverseArray(k,nums.length-1,nums);
        return;
    }
}