//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> findRow(int r){
        vector<int> ansRow;
        long res = 1;
        for(int c = 0 ; c<=r ; c++){
                ansRow.push_back(res);
            res = res*(r-c);
            res = res/(c+1);
        }
        return ansRow;
    }
  
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        return findRow(n-1);
    }
};



//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);

        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends