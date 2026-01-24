 class Solution {
  public:
    int findWays(int n) {
        // code here
         if(n&1){
             return 0;
         }

        int pairs=n/2;
        long long catalan =1;

        for(int i=1;i<=pairs;i++){
            
            catalan=catalan *2*(2* i-1)/(i+1);
        }

        return (int)catalan;
        
    }
};