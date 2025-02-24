//{ Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.lang.*;
import java.math.*;
import java.io.*;

class GFG {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            int a=sc.nextInt();
            int b=sc.nextInt();
            
            Solution obj = new Solution();
            boolean ans = obj.isPossible(a,b);
            if(ans==true)
                System.out.println(1);
            else{
                System.out.println(0);
            }
        
System.out.println("~");
}
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution{
    
    public static boolean isPossible(int a, int b){
        // Code here
         if(a+b == 3 || a+b==5) return true;
        else return false;
    }
}