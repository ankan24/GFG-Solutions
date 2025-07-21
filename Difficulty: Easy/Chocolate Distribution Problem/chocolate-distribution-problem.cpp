class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
    int n = a.size();
    int ans = INT_MAX;
    sort(a.begin(),a.end());
    for(int i=0;i<=n-m;i++){
          int minval = a[i];
          int maxval = a[i+m-1];
         ans = min(ans, maxval-minval);
    }
     return ans;
    }
};