//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    void leftRotate(vector<int>& arr, int d) {
        // code here
        vector<int> re;
        for(int i=0;i<d;i++){
            re.push_back(arr[i]);
        }
        vector<int> ans;
        for(int i=d;i<arr.size();i++){
            ans.push_back(arr[i]);
        }
        for(int ele : re){
            ans.push_back(ele);
        }
        for(int i=0;i<arr.size();i++){
            arr[i] = ans[i];
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore(); // Ignore the newline character after d
        Solution ob;
        ob.leftRotate(arr, d);
        for (int x : arr) {
            cout << x << " ";
        }
        cout << "\n";
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends