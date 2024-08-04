class Solution {
   public int removeDuplicates(int[] arr) {
       int j=1;
       int i=0;
        while(j<arr.length){
            if(arr[i]!=arr[j]){
                i++;
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            j++;
        }
        return i+1;
    }
}