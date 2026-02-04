class Solution {
    public int getLastMoment(int n, int left[], int right[]) {
        int lmax = Integer.MIN_VALUE, rmax = Integer.MIN_VALUE;
        for(int i : left) if(lmax < i) lmax = i;
        for(int i : right) if(rmax < n - i) rmax = n - i;
        return Math.max(lmax, rmax);
    }
}