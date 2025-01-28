//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int l = 0;
        int r = arr.size()-1;
        int minele = INT_MAX;
        int idx = -1;
        while(l <= r){
            int m = l+(r-l)/2;
            
           if(arr[l] <= arr[r]){
               if(minele > arr[l]){
               minele =arr[l];
                 idx = l;
               }
               break;
           }
           
           if( arr[l] <= arr[m]){ // left part sorted
              if(arr[l] < minele){
                  minele = arr[l];
                  idx = l;
              }
               l = m+1;
           }else{  // right part sorted
               if(arr[m] < minele){
                   minele = arr[m];
                   idx = m;
               }
                r = m-1;
           }
        }
        return idx;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        Solution ob;
        int res = ob.findKRotation(arr);
        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends