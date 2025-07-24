// User function Template for C++

class Solution {
  public:
void addsol(vector<vector<int>> &b , vector<vector<int>> &ans,int n){
    vector<int> path;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(b[i][j]==1) path.push_back(j+1);
        }
    }
    ans.push_back(path);
}

 bool issafe(int row, int col, vector<vector<int>> &board, int n) {
        int x = row, y = col;

        // Check upper diagonal (left)
        x = row; y = col;
        while (x >= 0 && y >= 0) {
            if (board[x][y] == 1) return false;
            x--; y--;
        }

        // Check lower diagonal (left)
        x = row; y = col;
        while (x < n && y >= 0) {
            if (board[x][y] == 1) return false;
            x++; y--;
        }

        // Check same row (left)
        y = col;
        while (y >= 0) {
            if (board[row][y] == 1) return false;
            y--;
        }

        return true;
    }
  
void solve(vector<vector<int>> &b , vector<vector<int>> &ans , int col , int n){
   // base case
    if(col == n){
        addsol(b,ans,n);
        return;
    }
    
    // solve 1 case and rest recursion will take care
    for(int row = 0;row<n;row++){
        if(issafe(row,col,b,n)){
            // placing queen is safe
            b[row][col] = 1;
            solve(b,ans,col+1,n);
            //backtrack
            b[row][col]=0;
        }
    }
}
  
  
    vector<vector<int>> nQueen(int n) {
        // code here
         vector<vector<int>> board(n, vector<int>(n,0));
         vector<vector<int>> ans;
         
         solve(board ,ans ,0 ,n);
         return ans;
    }
};

