// User function template for C++
class Solution {
  public:
    int solve(vector<int> &a , int n , int i,vector<int> &dp){
        if(i>=n) return 0;
        
        if(dp[i]!=-1) return dp[i];
        int include = solve(a,n,i+2,dp)+a[i];
        int exclude = solve(a,n,i+1,dp)+0;
        dp[i] = max(include,exclude);
        return dp[i];
    }
  
    // calculate the maximum sum with out adjacent
    int findMaxSum(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> dp(n,-1);
        int ans = solve(arr,n,0,dp);
        return ans;
    }
};