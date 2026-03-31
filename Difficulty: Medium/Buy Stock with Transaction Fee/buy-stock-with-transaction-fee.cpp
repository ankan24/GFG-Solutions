 class Solution {
  public:
    int maxProfit(vector<int>& arr, int k) {
        // Code here
        int n=arr.size();
        int previousBuyState=0-arr[0];
        int previousSellState=0;
        
        for(int i=1;i<n;i++){
            previousBuyState=max(previousBuyState,previousSellState-arr[i]);
            previousSellState=max(previousSellState,previousBuyState+arr[i]-k);
        }
        return previousSellState;
    }
};