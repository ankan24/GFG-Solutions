//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxLen(vector<int> &a) {
        // Your code here
        int ans = 0,sum=0;
        map<int,int>m;
        m[0]=-1;
        for(int i=0;i<a.size();i++){
            
            if(a[i])sum++;
            else sum--;
            
            if(m.find(sum)==m.end())m[sum]=i;
            else ans=max(ans,i-m[sum]);
            
        }
       
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    cin.ignore(); // To ignore the newline character after reading T

    while (T--) {
        string line;
        getline(cin, line); // Read the whole line for the array

        // Convert the line into an array of integers
        stringstream ss(line);
        vector<int> a;
        int num;
        while (ss >> num) {
            a.push_back(num);
        }

        // Create the solution object
        Solution obj;

        // Call the maxLen function and print the result
        cout << obj.maxLen(a) << endl;
    }

    return 0;
}
// } Driver Code Ends