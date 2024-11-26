//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
    void solve(string s , set<string>&a , int idx){
        if(idx >= s.length()){
             a.insert(s);
            return;
        }
        
        for(int i = idx ; i<s.length() ; i++){
            swap(s[idx],s[i]);
            solve(s,a,idx+1);
            swap(s[idx],s[i]);
        }
    }
  
     
    vector<string> findPermutation(string &s) {
        // Code here there
        set<string> ans;
        int i = 0;
        solve(s,ans,i);
        vector<string> organs(ans.begin(),ans.end());
        return organs;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        vector<string> ans = ob.findPermutation(S);
        sort(ans.begin(), ans.end());
        for (auto i : ans) {
            cout << i << " ";
        }
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends