//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    string minSum(vector<int> &arr) {
        // code here
           int sum = 0;
        int carry = 0;
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int i = n-1, j = n-2;
        string ans = "";
        while(j>=0||i>=0) {
            int temp = carry;
            if(i>=0) temp+=arr[i];
            if(j>=0) temp+=arr[j];
            i-=2;
            j-=2;
            ans.push_back(char('0' + temp%10));
            carry = temp/10; 
        }
        if(carry!=0) ans.push_back(char('0' + carry));
        while(ans.size() && ans.back() == '0') ans.pop_back();
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;
        string ans = ob.minSum(a);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends