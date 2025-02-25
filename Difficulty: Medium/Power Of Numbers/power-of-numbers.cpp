//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int reverseExponentiation(int n) {
        // code here
          int temp = n;
            int rev = 0;
            while(n>0){
                int rem = n%10;
                n = n/10;
                rev = rev*10+rem;
            }
        return pow(temp,rev);
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