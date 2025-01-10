//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here.
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<k;i++){
          mp[arr[i]]++;
        }
        ans.push_back(mp.size());
        for(int i=k;i<arr.size();i++){
          mp[arr[i]]++;
          mp[arr[i-k]]--;
          if(mp[arr[i-k]]==0) mp.erase(arr[i-k]);
          ans.push_back(mp.size());
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        vector<int> res = obj.countDistinct(arr, k);
        for (auto it : res)
            cout << it << " ";
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends