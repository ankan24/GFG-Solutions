//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int tc = Integer.parseInt(br.readLine().trim());

        while (tc-- > 0) {

            String[] str = br.readLine().trim().split(" ");
            int[] a = new int[str.length];
            for (int i = 0; i < str.length; i++) {
                a[i] = Integer.parseInt(str[i]);
            }
            String[] nk = br.readLine().trim().split(" ");
            int k = Integer.parseInt(nk[0]);
            Solution sln = new Solution();
            int ans = sln.aggressiveCows(a, k);

            System.out.println(ans);
            System.out.println("~");
        }
    }
}
// } Driver Code Ends


// User function Template for Java
class Solution {
    static boolean isPossible(int[] stalls,int min_dis, int l,int n){
        int k=1;
        int laststall=stalls[0];
        for(int i=1;i<l;i++){
            if(stalls[i]-laststall>=min_dis){
               k++;
               laststall=stalls[i];
            }
        }
        return k>=n;
    }
    public static int aggressiveCows(int[] stalls, int k) {
        // code here
        int l=stalls.length;
         Arrays.sort(stalls);
        int str = 1;
        int end=stalls[l-1]-stalls[0];
        int ans=0;
        while(str<=end){
            int mid=str+(end-str)/2;
            if(isPossible(stalls,mid,l,k)){
                ans=mid;
                str=mid+1;
            } else{
                end=mid-1;
            }
        }
        return ans;
    }
}
