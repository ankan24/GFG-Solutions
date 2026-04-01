 class Solution {
  public:
    int countStrings(int n) {
        // code here
        if(n==1)
        return 2;
        int curr0 = 0, curr1 = 0;
        int prev0 = 1;
        int prev1 = 1;
        for(int i = 2;i<=n;i++)
        {
            curr0 = prev0 + prev1;
            curr1 = prev0;
            prev0 = curr0;
            prev1 = curr1;
        }
        int ans = curr1 + curr0;
        return ans;
    }
};