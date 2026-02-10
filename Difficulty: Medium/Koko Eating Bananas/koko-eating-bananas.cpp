class Solution {
  public:
    int kokoEat(vector<int>& arr, int k) {
        // Code here
          int n = arr.size();
        sort(arr.begin(), arr.end());
        
        int lo = 1, hi = arr[n-1];
        
        int min_s = lo + (hi-lo)/2 ;

        while (lo<hi) {
            int tem = 0;
            min_s = lo + (hi-lo)/2 ;
            // cout << lo << ' ' << min_s << ' ' << hi << '\n';
            for (int x:arr) {
                tem += (x+min_s-1)/min_s;
            }
            if (tem<=k) hi = min_s;
            else lo = min_s+1;
        }
        
        return lo;
    }
};