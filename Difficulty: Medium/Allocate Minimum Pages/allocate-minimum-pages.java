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
            int ans = sln.findPages(a, k);

            System.out.println(ans);
            System.out.println("~");
        }
    }
}
// } Driver Code Ends



//Back-end complete function Template for Java

 class Solution {
     public static int countStudent(int []arr,int pages){
         //Copy
        int n = arr.length;
        int student=1;
        long studentPages=0;
        for(int i =0;i<n;i++){
            if(studentPages+arr[i]<=pages){
                studentPages+=arr[i];
            }else{
                student++;
                studentPages=arr[i];
            }
        }
        return student;
    }
    public static int findPages(int[] arr, int k) {
        int n =arr.length;
         if(k>n){
            return -1;
        }
        int low = arr[0];  

for (int i = 1; i < arr.length; i++) {
    if (arr[i] > low) {
        low = arr[i];  
    }
}
        int high=0;
        for(int  i =0;i<n;i++){
            high+=arr[i];

        }
        while(low<=high){
            int mid=(low+high)/2;
            if(countStudent(arr, mid)>k){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return low;
        // code here
    }
}

