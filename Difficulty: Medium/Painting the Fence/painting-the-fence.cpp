class Solution {
  public:
    int add(int a, int b){
        return a+b;
    }
    int mul(int a,int b){
        return a*b;
    }
  
    int solve(int n,int k,vector<int> &dp){
        
        if(n==1) return k;
        if(n==2) return add(k,mul(k,k-1));
        
        if(dp[n]!=-1) return dp[n];
        dp[n] = add(mul(solve(n-2,k,dp),k-1) ,mul(solve(n-1,k,dp),k-1));
        return dp[n];
    }
  
    int countWays(int n, int k) {
        // code here
        vector<int> dp(n+1,-1);
        int ans = solve(n,k,dp);
        return ans;
    }
};