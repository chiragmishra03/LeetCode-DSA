class Solution {
    public int maxScore(int[] arr, int k) {
        int n = arr.length;
        int m = n-k;
        int i=0,j=0;
        int sum=0;
        int mini = Integer.MAX_VALUE;
        int total=0;
        while(j<n){
            sum+=arr[j];
            total+=arr[j];
            if(j-i+1 >= m){
                mini = Math.min(sum,mini);
                sum-=arr[i];
                i++;
            }
            j++;
        }
        if(arr.length==k)return total;
        return total-mini;
    }
}