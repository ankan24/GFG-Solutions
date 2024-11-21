//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        // int min = INT_MAX;
        // int minIndex = 0;
        // int n = prices.size();
        
        // for(int i=0;i<n;i++){
        //     if(prices[i] < min){
        //         min = prices[i];
        //         minIndex = i;
        //     }
        // }
        // int max = INT_MIN;
        // int maxIndex = 0;
        // for(int i=minIndex;i<n;i++){
        //     if(prices[i] > max){
        //         max = prices[i];
        //         maxIndex = i;
        //     }
        // }
        
        // return prices[maxIndex] - prices[minIndex];
        
        
    int n = prices.size();
    if (n == 0) return 0;  

    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int i = 0; i < n; i++) {
        minPrice = min(minPrice, prices[i]);
        
        maxProfit = max(maxProfit, prices[i] - minPrice);
    }

    return maxProfit;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> prices;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            prices.push_back(number);
        }

        Solution ob;
        int ans = ob.maximumProfit(prices);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends