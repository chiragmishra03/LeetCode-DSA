class Solution {
    public int maxProfit(int[] prices) {
        int profit=0;
        int buyed=prices[0];
        for(int i=1;i<prices.length;i++){
            if(buyed < prices[i]){
                profit = Math.max(profit,prices[i]-buyed);
            }
            else{
                buyed = prices[i];
            }
        }
        return profit;
    }
}