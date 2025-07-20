// User function Template for C++

class Solution {
  public:
    int minimumDays(int S, int N, int M) {
        // code here
        int sunday = S/7;
        int totalday = S-sunday;
        int totalfood = S*M;
        int ans = 0;
        if(M > N) return -1;
        
        
        if(totalfood%N==0){
            ans = (totalfood/N);
        }else{
            ans = (totalfood/N)+1;
        }
        if(6*(N-M) < M && S>=7) return -1;
        
        if(ans <= totalday){
            return ans;
        }else{
            return -1;
        }
    }
};