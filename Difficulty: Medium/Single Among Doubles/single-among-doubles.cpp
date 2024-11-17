//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int search(int n, int arr[]) {
        // code
        map<int,int> mp;
         for(int i=0;i<n;i++){
             mp[arr[i]]++;
         }
         
          for (auto ele : mp) {
            if (ele.second == 1) {
                return ele.first;
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.

// Driver program
int main() {
    int t, len;
    cin >> t;
    while (t--) {
        cin >> len;
        int arr[len];
        for (int i = 0; i < len; i++) {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.search(len, arr) << '\n';
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends