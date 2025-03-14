//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

/*You are required to complete this function*/

class Solution {
  public:
    int maxLen(vector<int>& arr) {
        // code here
        unordered_map<int, int> prefixMap; // Stores prefix sum and first occurrence index
        int maxLength = 0;
        int prefixSum = 0;

        for (int i = 0; i < arr.size(); i++) {
            prefixSum += arr[i]; // Calculate prefix sum

            // If prefix sum is zero, entire subarray [0...i] has sum 0
            if (prefixSum == 0) {
                maxLength = i + 1;
            }

            // If prefix sum has been seen before, update maxLength
            if (prefixMap.find(prefixSum) != prefixMap.end()) {
                maxLength = max(maxLength, i - prefixMap[prefixSum]);
            } else {
                // Store first occurrence of the prefix sum
                prefixMap[prefixSum] = i;
            }
        }
        return maxLength;
        
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.maxLen(a) << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends