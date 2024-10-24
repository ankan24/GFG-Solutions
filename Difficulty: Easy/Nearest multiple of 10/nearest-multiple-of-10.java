//{ Driver Code Starts
// Initial Template for Java

// Initial Template for Java

/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;


// } Driver Code Ends
// User function Template for Java

class Solution {

    String roundToNearest(String str) {
       int n = str.length();
       int last = str.charAt(n-1)-'0';
       
       char[]digit = str.toCharArray();
       
       if(last<=5){
           digit[n-1]='0';
       }
       else{
           digit[n-1]='0';
           boolean carry = true;
           
           for(int i = n-2; i>=0 ; i--){
               if(digit[i] =='9')
                 digit[i]= '0';
                 else{
                     digit[i] = (char) (digit[i] + 1);
                     carry = false;
                     break;
                 }
           }
           if(carry)
            return '1' + new String(digit);
       }
       return new String(digit);
    }
}


//{ Driver Code Starts.

// Driver class
class Array {

    // Driver code
    public static void main(String[] args) throws IOException {
        // Taking input using buffered reader
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int testcases = Integer.parseInt(br.readLine());

        // looping through all testcases
        while (testcases-- > 0) {

            String str = br.readLine().trim();

            Solution obj = new Solution();

            String res = obj.roundToNearest(str);

            System.out.println(res);
        
System.out.println("~");
}
    }
}

// } Driver Code Ends