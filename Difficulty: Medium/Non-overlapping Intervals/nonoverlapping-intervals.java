//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.lang.*;
import java.math.*;
import java.util.*;

class GFG {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            int n = sc.nextInt();
            int a[][] = new int[n][2];
            for (int i = 0; i < n; i++) {
                a[i][0] = sc.nextInt();
                a[i][1] = sc.nextInt();
            }
            Solution obj = new Solution();
            int ans = obj.minRemoval(a);
            System.out.println(ans);

            System.out.println("~");
        }
    }
}

// } Driver Code Ends


// User function Template for Java

class Solution {
    static int minRemoval(int intervals[][]) {
        // code here
         Arrays.sort(intervals, (a, b) -> a[1] - b[1]);

        int prevEnd = Integer.MIN_VALUE; // Previous interval's end time
        int removeCount = 0;            // Count of intervals to remove

        // Iterate through each interval
        for (int[] interval : intervals) {
            if (interval[0] >= prevEnd) {
                // No overlap, update the end time
                prevEnd = interval[1];
            } else {
                // Overlap, increment the removal count
                removeCount++;
            }
        }

        return removeCount;
    }
}
