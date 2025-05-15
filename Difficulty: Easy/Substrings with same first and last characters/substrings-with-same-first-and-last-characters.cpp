//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
       int countSubstring(string &s) 
    {
        unordered_map<char,int> mp;
        int sum = 0;
        
        for(auto &it : s)
        {
            mp[it]++;
        }
        
        for(auto itr = mp.begin(); itr != mp.end(); itr++)
        {
            int n = itr->second;
            sum += n*(n+1)/2;
        }
        return sum;
        // code here
    }
};


//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        Solution ob;

        cout << ob.countSubstring(str) << "\n";

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends