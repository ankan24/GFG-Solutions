//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int c = 0;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i] == arr[i+1]){
                c++;
            }
        }
        if(c == arr.size()-1) return -1;
        sort(arr.begin(),arr.end());
       for(int i=arr.size()-1 ; i>0 ; i--){
           if(arr[i] != arr[i-1]){
               return arr[i-1];
           }
       }
       return arr[arr.size()-2];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends