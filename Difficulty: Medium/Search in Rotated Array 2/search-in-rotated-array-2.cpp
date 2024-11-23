//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool Search(vector<int>& arr, int k) {
        // Code here
        int l = 0;
        int r = arr.size()-1;
        
        while(l<=r){
            int m = l+(r-l)/2;
            
            if(arr[m]==k){
                return true;
            }
            if(arr[l]<= arr[m]){
                if(arr[l] <= k && arr[m] >= k){
                    r = m-1;
                }else{
                    l = m+1;
                }
            }else{
                if(arr[m] <= k && arr[r] >= k){
                    l = m+1;
                }else{
                    r = m-1;
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        bool res = obj.Search(arr, k);
        if (res)
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends