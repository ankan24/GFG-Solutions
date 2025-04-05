//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    void solve(stack<int>& s,int idx,int mid){
        if(idx==mid){
            s.pop();
            return;
        }
        
        int t = s.top();
        s.pop();
        solve(s,idx+1,mid);
        s.push(t);
    }
  
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
        // code here..
       int n = s.size();
       int mid = n/2;
      solve(s,0,mid);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        stack<int> s;
        int num;
        while (ss >> num) {
            s.push(num);
        }

        Solution ob;
        ob.deleteMid(s);
        while (!s.empty()) {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends