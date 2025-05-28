class Solution {
    public boolean ValidCorner(int mat[][]) {
        // Code here
       int n=mat.length,m=mat[0].length; 
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(mat[i][j]==1){
                   if(checkRight(mat,i,j,n,m)) return true;
               }
           }
       }
       return false;
    }
    private boolean checkRight(int mat[][],int i,int j,int n,int m){
        for(int k=j+1;k<m;k++){
            if(mat[i][k]==1){
                if(checkBottom(mat,i,j,n,m,k)) return true;
            }
        }
        return false;
    }
    private boolean checkBottom(int mat[][],int i,int j,int n,int m,int l){
        for(int k=i+1;k<n;k++){
            if(mat[k][j]==1){
                if(mat[k][l]==1) return true;
            }
        }
        return false;
    }
}