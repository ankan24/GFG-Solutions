//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int ams = 0;
        int num = n;
        while(n > 0){
            int rem = n%10;
            int val = rem*rem*rem;
            ams += val; ;
            n /= 10;
        }
        return (num==ams);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        bool flag = ob.armstrongNumber(n);
        if (flag) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends