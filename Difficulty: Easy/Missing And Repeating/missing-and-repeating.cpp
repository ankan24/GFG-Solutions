class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        long n = arr.size();
        long long aSum1 = (n*(n+1))/2;
        long long aSum2 = (n*(n+1)*(2*n+1))/6;
         
        long long oSum1=0;
        long long oSum2=0;
        
        for(long long val : arr){
            oSum1 += val;
            oSum2 += (val*val);
        }
        
        long long val1 = aSum1-oSum1;
        long long val2 = aSum2-oSum2;
        val2 = val2/val1;
        
        long long miss = (val1+val2)/2;
        long long rep = val2-miss;
        
        return {rep,miss};
    }
};