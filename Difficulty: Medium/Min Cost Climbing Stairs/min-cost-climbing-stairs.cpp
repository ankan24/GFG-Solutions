//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//Back-end complete function Template for C++

class Solution {
  public:
      int helper(int idx, vector<int>& cost, vector<int> &dp)
    {
        if(idx == cost.size())
            return 0;
        int ans = INT_MAX;
        if(dp[idx] != -1)
            return dp[idx];
        if(idx + 1 <= cost.size())
            ans = min(ans, cost[idx] + helper(idx+1,cost,dp));
        if(idx + 2 <= cost.size())
            ans = min(ans, cost[idx] + helper(idx+2,cost,dp));
        return dp[idx]=ans;
    }
    int minCostClimbingStairs(vector<int>& cost) 
    {
        vector<int> dp(cost.size() + 1, -1);
        int ans = min(helper(0,cost,dp), helper(1,cost,dp));
        return ans;
        // Write your code here
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t-- > 0) {
        string str;
        getline(cin, str);

        stringstream ss(str);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution sln;
        int res = sln.minCostClimbingStairs(arr);
        cout << res << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends