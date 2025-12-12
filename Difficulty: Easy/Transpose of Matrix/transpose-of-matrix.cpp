class Solution {
  public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {
        // code here
        for(int i=0;i<mat.size();i++){
            for(int j=i+1;j<mat[0].size();j++){
                int t = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] =t;
            }
        }
    return mat;
    }
};