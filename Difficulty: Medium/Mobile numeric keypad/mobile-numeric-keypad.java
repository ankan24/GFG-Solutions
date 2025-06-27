class Solution {
    public long helper(int n, int i, int j, long dp[][][]){
        if(i<0 || i>3 || j<0 || j>2){
            return 0;
        }
        if(i==3 && (j==0 || j==2)){
            return 0;
        }
        if(n==1){
            return 1;
        }
        if(dp[i][j][n]!=-1){
            return dp[i][j][n];
        }
        n--;
        return dp[i][j][n+1] = helper(n,i,j,dp)+helper(n,i-1,j,dp)+helper(n,i+1,j,dp)+helper(n,i,j-1,dp)+helper(n,i,j+1,dp);
    }
    public long getCount(int n) {
        // Your code goes here
        long ans = 0;
        long dp[][][] = new long[4][3][n+1];
        for(long temp[][]:dp){
            for(long row[]:temp){
                Arrays.fill(row, -1);
            }
        }
        for(int i=0;i<4;i++){
            for(int j=0;j<3;j++){
                if(i==3 && (j==0 || j==2)){
                    continue;
                }
                ans += helper(n, i, j, dp);
            }
        }
        return ans;
    }
}

