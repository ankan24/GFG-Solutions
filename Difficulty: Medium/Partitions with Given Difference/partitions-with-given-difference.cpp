 class Solution {
  public:
    virtual int fun(int i, int sum1, int sum2, int &n, vector<int>& arr, int diff, vector<vector<vector<int>>> &dp){
      if(i==n){
        if(sum1-sum2 == diff) return 1;
        return 0;
      }
      
      if(dp[i][sum1][sum2] != -1) return dp[i][sum1][sum2];
      
      
      int op1 = fun(i+1, sum1+arr[i], sum2, n, arr, diff, dp);
      int op2 = fun(i+1, sum1, sum2+arr[i], n, arr, diff, dp);
      
      return dp[i][sum1][sum2] = op1+op2;
    }
    
    virtual int countPartitions(vector<int>& arr, int diff) {
      int n = arr.size();
      int sum=0;
      for(int &x: arr) sum+=x;
      
      vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(sum+1, vector<int>(sum+1, -1)));
      
      
      return fun(0, 0, 0, n, arr, diff, dp);
      
    }
};