 class Solution {
  public:
    int maxCircularSum(vector<int> &arr) {
           int n = arr.size();
           int mini = INT_MAX, minsum = 0;
           int maxi = INT_MIN, maxsum = 0;
           int total =0;
           for(int i:arr){
                    total+=i;
                    minsum+=i;
                    maxsum+=i;
                    mini = min(mini, minsum);
                    maxi = max(maxi, maxsum);
                    if(minsum>0){
                         minsum=0;
                    }
                    if(maxsum<0){
                          maxsum=0;
                    }
                    
           }
          if(maxi<0) return maxi;
           
           return max(maxi, total-mini);
    }
};

