//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            String a, b;
            a = sc.next();
            b = sc.next();
            Solution ob = new Solution();
            System.out.println(ob.addBinary(a, b));

            System.out.println("~");
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {
    public String addBinary(String s1, String s2) {
        // code here
        int carry=0;
        int i=s1.length()-1;
        int j=s2.length()-1;
        StringBuilder ans=new StringBuilder();
        while(i>=0 || j>=0 || carry!=0){
            int sum=carry;
            if(i>=0) sum+= s1.charAt(i)-'0';
            if(j>=0) sum+=s2.charAt(j)-'0';
            ans.append(sum%2);
            carry=sum/2;
            
            i--;
            j--;
        }
        ans.reverse();
        while (ans.length() > 0 && ans.charAt(0) == '0') {
            ans.deleteCharAt(0);  // Remove the first character
        }
        return ans.toString();
    }
}