//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    void solve(string& s , int n , string& ans){
        if(n==0) return;
        ans += s[n-1];
        solve(s,n-1,ans);
    }
    string reverseString(string& s) {
        // code here
        string ans="";
        int n = s.length();
        solve(s,n,ans);
        return ans;
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.reverseString(s) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends