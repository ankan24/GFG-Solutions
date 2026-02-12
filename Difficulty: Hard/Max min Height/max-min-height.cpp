class Solution {
  public:
    int maxMinHeight(vector<int> &arr, int k, int w) {
        // code here
        int n = arr.size(), lo = 1e9;
        for(auto &e: arr) lo = min(lo, e);
        
        int hi = lo + k, res = -1;
        
        
        auto check = [&](int minHeight) -> bool {
            int reqk = 0;
            
            vector<int>pre(n, 0);
            
            for(int i=0; i<n; i++)
            {
                if(i) pre[i] += pre[i-1];
                int curr = arr[i] + pre[i];
                
                
                if(curr < minHeight)
                {
                    int extra = minHeight - curr;
                    
                    pre[i] += extra; reqk += extra;
                    if(i + w<= n-1) pre[i + w] -= extra;
                }
            }
            
            return reqk <= k;
        };
        
        while(lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            
            if(check(mid))
            {
                res = mid;
                lo = mid + 1;
            }else hi = mid - 1;
        }
        return res;
    }
};