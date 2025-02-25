//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            int N = Integer.parseInt(read.readLine());
            Solution ob = new Solution();
            System.out.println(ob.largestPrimeFactor(N));

            System.out.println("~");
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {
    static int largestPrimeFactor(int n) {
        int maxi=-1;
        
        for(int i=2;i<=n;i++){
            if(n%i==0){
                maxi=Math.max(maxi,i);
                while(n%i==0){
                    n/=i;
                }
            }
        }
        
        if(n!=1)maxi=Math.max(maxi,n);
        
        return maxi;
    }
}