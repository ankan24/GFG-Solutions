class Solution {
  public:
    void solve(vector<vector<int>>& mz , int n , int m , int i, int j, vector<string> &ans, string p){
         
        if(i>=n || j>=m || i<0 || j<0 || mz[i][j]==0){
            return;
        }
        
        if(i==n-1 && j==m-1){
            ans.push_back(p);
            return;
        }
        
        int t = mz[i][j];
        mz[i][j] = 0;
        solve(mz,n,m,i+1,j,ans,p+"D");
        solve(mz,n,m,i-1,j,ans,p+"U");
        solve(mz,n,m,i,j+1,ans,p+"R");
        solve(mz,n,m,i,j-1,ans,p+"L");
        mz[i][j] = t;
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        vector<string> ans;
        string path = "";
        int n = maze.size();
        int m = maze[0].size();
        if(maze[0][0]==0 || maze[n-1][m-1]==0) return ans;
        solve(maze , n , m , 0 , 0 , ans , path);
        sort(ans.begin(), ans.end()); 
        return ans;
    }
};
