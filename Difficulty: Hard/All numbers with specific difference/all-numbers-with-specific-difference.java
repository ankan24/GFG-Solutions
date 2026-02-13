 class Solution {
    boolean check(int k, int d) {
        int n = k;
        int sum = 0;
        while(n > 0) {
            sum += (n % 10);
            n /= 10;
        }
        return (k - sum) >= d;
    }
    public int getCount(int n, int d) {
        // code here
        int s = 1;
        int e = n;
        int ans = 0;
        
        while(s <= e) {
            int mid = s + (e - s) / 2;
            if(check(mid, d)) {
                ans = mid;
                e = mid - 1;
            }
            else {
                s = mid + 1;
            }
        }
        return ans == 0 ? 0 : n - ans + 1;
    }
};