//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool isOdd(char ch){
        if(ch=='1' || ch== '3' || ch=='5' || ch=='7' || ch=='9') return true;
        else return false;
    }
    string maxOdd(string s) {
        // your code here
         for(int i=s.length()-1 ; i>=0 ; i--){
             if(isOdd(s[i])){
                 break;
             }else{
                 s.pop_back();
             }
         }
         return s;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;

        cout << ob.maxOdd(s) << endl;
    
cout << "~" << "\n";
}
}

// } Driver Code Ends