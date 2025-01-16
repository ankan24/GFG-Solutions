//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        int mxval = 1;
        int n = arr.size();
        vector<int> ans(n);
        int zc = 0;
        for(int i=0;i<n;i++){
           if(arr[i]!=0)
              mxval *= arr[i];
           else 
              zc++;
        }
        
        for(int i=0;i<n;i++){
            if(zc > 1) 
                ans[i] = 0;
            else if(zc == 1) 
                ans[i] =(arr[i]==0) ? mxval : 0;
            else
                ans[i] = mxval/arr[i];
        }
        return ans;
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

        Solution obj;
        vector<int> res = obj.productExceptSelf(arr);

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends