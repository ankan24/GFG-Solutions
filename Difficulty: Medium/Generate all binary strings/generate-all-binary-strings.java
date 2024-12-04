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
      int n = sc.nextInt();
      Solution obj = new Solution();
      List<String> ans = obj.generateBinaryStrings(n);
      for(String s : ans) System.out.print(s+" ");
      System.out.println();
    
System.out.println("~");
}
  }
}

// } Driver Code Ends


//User function Template for Java

class Solution {

  public static List<String> generateBinaryStrings(int n) {
    // code here
    List<String> res = new ArrayList<>();
    soln(n,"0",res);
    soln(n,"1",res);
    return res;
  }
  static void soln(int n, String s, List<String> ls) {
      if(n == s.length()) {
          ls.add(s);
          return;
      }
      if(s.charAt(s.length()-1) == '0') {
          soln(n, s+"0", ls);
          soln(n, s+"1", ls);
      }
      else {
          soln(n, s+"0", ls);
      }
  }
}
     
     