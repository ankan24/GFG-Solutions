//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int myAtoi(char *s) {
        // Your code here
        int i = 0;
        long ans = 0;
        int sign = 1;
        
        while(s[i]== ' '){
            i++;
        }
        if(s[i]=='+' || s[i]=='-'){
            sign = (s[i]=='-'?-1:1);
            i++;
        }
        while(s[i] >= '0' && s[i]<='9'){
            ans = ans*10+(s[i]-'0');
            if(sign*ans >= INT_MAX) return INT_MAX;
            if(sign*ans <= INT_MIN) return INT_MIN;
            i++;
        }
        return (int)sign*ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        char s[20];
        cin >> s;
        Solution ob;
        int ans = ob.myAtoi(s);
        cout << ans << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends