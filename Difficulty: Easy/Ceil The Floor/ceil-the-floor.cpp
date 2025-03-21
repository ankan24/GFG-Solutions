//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
       sort(arr.begin(),arr.end());
       int l = 0;
       int floor = -1 , ceil = -1;
       int r = arr.size()-1;
       while(l<=r){
           int m = l+(r-l)/2;
           if(arr[m]==x) return {arr[m],arr[m]};
           else if(arr[m] < x){
               floor = arr[m];
               l = m+1;
           }else{
               ceil = arr[m];
               r = m-1;
           }
       }
       return {floor,ceil};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n~\n";
    }
    return 0;
}
// } Driver Code Ends