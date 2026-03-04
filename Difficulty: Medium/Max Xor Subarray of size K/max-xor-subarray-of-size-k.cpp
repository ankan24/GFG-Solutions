class Solution {
public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        int ans = 0, x = 0;
        
        for (int i = 0; i < arr.size(); i++) {
            x ^= arr[i];
            if (i >= k) x ^= arr[i - k];
            if (i >= k - 1) ans = max(ans, x);
        }
        
        return ans;
    }
};