//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int fun(int n){
      int sum = 0;
      for(int i=1;i<=n;i++){
          if(n%i==0){
              sum += i;
          }
      }
      return sum;
    }
  
    int sumOfDivisors(int n) {
        // Write Your Code here
        int ans = 0;
       for(int i=1;i<=n;i++){
           ans += fun(i);
       }
       return ans;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.sumOfDivisors(N);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends