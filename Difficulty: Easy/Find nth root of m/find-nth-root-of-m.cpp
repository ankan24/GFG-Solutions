//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int fun(int mid , int n){
         long long store = 1;
        for(int i=0;i<n;i++){
            store *= mid;
          if (store > INT_MAX) return INT_MAX;
        }
        return store;
    }
    int nthRoot(int n, int m) {
        // Code here.
        int l = 1;
        int r = m;
        while(l <= r){
            int mid = l+(r-l)/2;
            int val = fun(mid,n);
            if(val == m){
                return mid;
            }
            else if(val < m){
                l = mid+1;
            }else{
                r = mid-1;
            }
        }
        return -1;
    }
};



//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        Solution ob;
        int ans = ob.nthRoot(n, m);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends