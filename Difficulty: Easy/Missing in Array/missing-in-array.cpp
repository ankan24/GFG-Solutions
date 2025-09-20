class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n = arr.size();
        int as = 0;
        int ts = 0;
        for(int i=0;i<n;i++){
            as += arr[i];
        }
        for(int i=1;i<=n+1;i++){
            ts+=i;
        }
        return ts-as;
    }
};