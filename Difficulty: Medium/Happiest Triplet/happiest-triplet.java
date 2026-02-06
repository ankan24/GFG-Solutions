import java.util.*;

class Solution {
    int[] smallestDiff(int[] a, int[] b, int[] c) {

        Arrays.sort(a);
        Arrays.sort(b);
        Arrays.sort(c);

        int i = 0, j = 0, k = 0;
        int best = Integer.MAX_VALUE;

        int[] ans = new int[3];

        while (i < a.length && j < b.length && k < c.length) {

            int x = a[i], y = b[j], z = c[k];

            int mx = Math.max(x, Math.max(y, z));
            int mn = Math.min(x, Math.min(y, z));

            if (mx - mn < best) {
                best = mx - mn;
                ans[0] = x;
                ans[1] = y;
                ans[2] = z;
            }

            if (mn == x) i++;
            else if (mn == y) j++;
            else k++;
        }

        Arrays.sort(ans);
        for (int l = 0, r = 2; l < r; l++, r--) {
            int tmp = ans[l];
            ans[l] = ans[r];
            ans[r] = tmp;
        }

        return ans;
    }
}