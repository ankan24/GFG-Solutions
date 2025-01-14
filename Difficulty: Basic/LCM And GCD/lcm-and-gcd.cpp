//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int lcm(int a,int b,int g){
        int l = (a*b)/g;
        return l;
        
    }
    int gcd(int a,int b){
        int g = 0;
         for(int i=1;i<=min(a,b);i++){
             if(a%i==0 && b%i==0){
                g = i;
             }
         }
         return g;
    }
  
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        vector<int> ans;
        int g = gcd(a,b);
        int l = lcm(a,b,g);
       
        ans.push_back(l);
        ans.push_back(g);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int A, B;

        cin >> A >> B;

        Solution ob;
        vector<int> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends