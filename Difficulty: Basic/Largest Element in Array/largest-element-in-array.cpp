//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void solve(vector<int>& arr ,int n ,int& mx){
        if(n==0) return;
        
        if(mx < arr[n-1]) mx = arr[n-1];
        solve(arr , n-1 , mx);
        
    }
    
    int largest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int mx = INT_MIN;
        solve(arr,n , mx);
        return mx;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.largest(arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends