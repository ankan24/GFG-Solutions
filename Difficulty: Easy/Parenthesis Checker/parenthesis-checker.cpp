//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
         if(s.length()<=1){
            return false;
        }
        stack<char> stack;
        for(int i=0;i<s.length();i++){
            if(s[i]=='[' || s[i]=='{' || s[i]=='('){
                stack.push(s[i]);
            }
            else if(stack.empty()){
                return false;
            }
            else{
                if(s[i]==')'){
                    if(stack.top()!='('){
                        return false;
                    }
                }
                if(s[i]=='}'){
                    if(stack.top()!='{'){
                        return false;
                    }
                }
                if(s[i]==']'){
                    if(stack.top()!='['){
                        return false;
                    }
                }
                stack.pop();
            }
        }
        if (stack.empty()){
            return true;
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isBalanced(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends