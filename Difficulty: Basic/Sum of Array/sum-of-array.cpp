//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
  int solve(vector<int>& arr,int n){
      if(n==0) return 0;
      return arr[n-1]+solve(arr,n-1);
  }
    // Function to return sum of elements
    int arraySum(vector<int>& arr) {
        // code here
       int n = arr.size();
       int ans = solve(arr,n);
       return ans;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        int ans = ob.arraySum(nums); // Pass the vector nums to the sum function
        cout << ans << "\n~\n";
    }
    return 0;
}
// } Driver Code Ends