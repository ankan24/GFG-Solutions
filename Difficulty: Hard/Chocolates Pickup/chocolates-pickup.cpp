class Solution {
  public:
    virtual int maxChocolateService(int i, int j1, int j2, int &n, int &m, vector<vector<int>> &grid,
     vector<vector<vector<int>>> &dp){
       if(j1<0 || j2<0 || j1>=m || j2>=m) return -(int)1e9;
       
       if(i==n-1){
         if(j1==j2) return grid[i][j1];
         return (grid[i][j1] + grid[i][j2]);  
       }
       
       if(dp[i][j1][j2]!=-1) return dp[i][j1][j2];
       
       int maxi=INT_MIN;
       
       for(int dj1=-1; dj1<2; dj1++){
         for(int dj2=-1; dj2<2; dj2++){
           if(j1==j2) maxi=max(maxi, grid[i][j1]+maxChocolateService(i+1, j1+dj1, j2+dj2, n, m, grid, dp));
           else maxi=max(maxi, grid[i][j1]+grid[i][j2]+maxChocolateService(i+1, j1+dj1, j2+dj2, n, m, grid, dp));
         }   
       }
       
       return dp[i][j1][j2]=maxi;
     }
    
    virtual int maxChocolate(vector<vector<int>>& grid){
      int n=grid.size(), m=grid[0].size();
      
      vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(m+1, vector<int>(m+1, -1)));
      return maxChocolateService(0, 0, m-1, n, m, grid, dp);
    }
};