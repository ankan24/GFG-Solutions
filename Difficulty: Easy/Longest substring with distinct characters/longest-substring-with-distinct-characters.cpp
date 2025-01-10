//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        unordered_map<char,int> mp;
        int ans = 0;
        int j = 0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            
            while(mp[s[i]]>1) mp[s[j++]]--;
            ans = max(ans,i-j+1);
        }
     
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends