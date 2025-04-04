//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int solve(int x ,int n){
        if(x==0) return 1;
        return n*solve(x-1,n);
    }
    int reverseExponentiation(int n) {
        // code here
        int x = 0;
        int temp = n;
        while(n > 0){
            int rem = n%10;
            x = x*10+rem;
            n = n/10;
        }
        return solve(x,temp);
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T; // test cases

    while (T--) {
        int n;
        cin >> n; // input N

        Solution ob;
        // power of the number to its reverse
        int ans = ob.reverseExponentiation(n);
        cout << ans << endl;
    }

    return 0;
}

// } Driver Code Ends