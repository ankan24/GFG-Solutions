//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int c = 0;
    void TOHelper(int n,int from , int to , int aux){
        if(n > 0){
            TOHelper(n-1,from,aux,to);
            // cout << "move disk "<<n<<" from rod " <<from<<" to rod "<<to<<end;
            c++;
            TOHelper(n-1,aux ,to ,from);
        }
    }
    
    // You need to complete this function
    int towerOfHanoi(int n, int from, int to, int aux) {
        // Your code here
        TOHelper(n,from,to,aux);
        return c;
    }
};


//{ Driver Code Starts.

int main() {

    int T;
    cin >> T; // testcases
    while (T--) {

        int N;
        cin >> N; // taking input N

        // calling toh() function
        Solution ob;

        cout << ob.towerOfHanoi(N, 1, 3, 2) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends