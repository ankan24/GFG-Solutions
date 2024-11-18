//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) {
        // code here
        int open = 0,close = 0;
        string ans ="";
        int st = 0;
        
        for(int i=0;i<s.length();i++){
            char x = s[i];
            if(x=='('){
                open++;
            }
            if(x==')'){
                close++;
            }
        
        if(open == close){
            ans += s.substr(st + 1, i - st - 1);
            st = i+1;
           }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;

        cout << obj.removeOuter(s) << "\n";
    
cout << "~" << "\n";
}
}
// } Driver Code Ends