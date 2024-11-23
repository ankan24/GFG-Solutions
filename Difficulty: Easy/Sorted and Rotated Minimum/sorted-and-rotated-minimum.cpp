//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findMin(vector<int>& arr) {
        // complete the function here
        int l = 0;
        int r = arr.size()-1;
        while(l<r){
            int m = l+(r-l)/2;
            if(arr[m] > arr[r]){
                l = m+1;
            }else{
              r = m;  
            }
        }
        return arr[l];
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    Solution ob;
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        cout << ob.findMin(nums) << endl;
    }
    return 0;
}

// } Driver Code Ends