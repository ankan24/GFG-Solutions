//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int l = 0;
        int r = arr.size()-1;
        int first = -1, last =-1;
        while(l <= r){
             int m = l+(r-l)/2;
            if(arr[m]==target){
                first = m;
                 r = m-1;
            }else if(arr[m] < target){
                l = m+1;
            }else{
                r = m-1;
            }
        }
        
        l = 0;
        r = arr.size()-1;
        
         while(l <= r){
             int m = l+(r-l)/2;
            if(arr[m]==target){
                last = m;
                l = m+1;
            }else if(arr[m] < target){
                l = m+1;
            }else{
                r = m-1;
            }
        }
        
        if(first == -1 && last == -1) return 0;
        
        return last-first+1;
    }
};



//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.countFreq(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends