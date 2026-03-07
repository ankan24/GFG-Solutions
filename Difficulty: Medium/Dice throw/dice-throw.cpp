class Solution {
  public:
    virtual int fun(int n, int x, int m, vector<vector<int>> &dp){
      if(n==0){
        if(x==0) return 1;
        return 0;
      }
      
      if(dp[n][x]!=-1) return dp[n][x];
      
      int temp=0;
      for(int i=m; i>0; i--){
        if(i<=x)
          temp+=fun(n-1, x-i, m, dp);
      }
      
      return dp[n][x]=temp;
    }
    
    virtual int noOfWays(int m, int n, int x) {
      vector<vector<int>> dp(n+1, vector<int>(x+1, -1));
      return fun(n, x, m, dp);
    }
};