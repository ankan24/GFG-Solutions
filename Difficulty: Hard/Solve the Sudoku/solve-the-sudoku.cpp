class Solution {
  public:
    bool isValid(vector<vector<int>> &m , int row, int col, int val){
       for(int i=0;i<m.size();i++){
           if(m[row][i]==val) return false;
           if(m[i][col]==val) return false;
           if(m[3*(row/3)+i/3][3*(col/3)+i%3]==val) return false;
       }
     return true;
    }
    bool solve(vector<vector<int>> &mat){
       for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0){
                    for(int val=1;val<=9;val++){
                        if(isValid(mat,i,j,val)){
                            mat[i][j] = val;
                            
                            if(solve(mat)) return true;
                            else mat[i][j] = 0;
                        }
                    }
                    return false;
                }
            }
        } 
        return true;
    }
    // Function to find a solved Sudoku.
    void solveSudoku(vector<vector<int>> &mat) {
        // code here
        solve(mat);
    }
};
