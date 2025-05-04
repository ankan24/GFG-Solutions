//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
     int findSubString(string& str) 
    {
        int i = 0, j = 0;
        set<char> st;
        int ans = INT_MAX;
        unordered_map<int,int> mp;
        for(int i = 0; i < str.size(); i++)
        {
            st.insert(str[i]);    
        }
        
        int len = st.size();
        
        while(j < str.size())
        {
            mp[str[j]]++;
            if(mp.size() == len)
            {
                while(mp[str[i]] > 1)
                {
                    mp[str[i]]--;
                    i++;
                }
                ans = min(ans, j - i + 1);
            }
            j++;
        }
        return ans;
        
    }

};


//{ Driver Code Starts.
//      Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends