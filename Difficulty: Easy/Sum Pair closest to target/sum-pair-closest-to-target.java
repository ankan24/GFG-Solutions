//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

public class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while (t-- > 0) {

            String line = br.readLine();
            String[] tokens = line.split(" ");

            ArrayList<Integer> array = new ArrayList<>();

            for (String token : tokens) {
                array.add(Integer.parseInt(token));
            }

            int[] arr = new int[array.size()];
            int idx = 0;
            for (int i : array) arr[idx++] = i;

            int target = Integer.parseInt(br.readLine());

            Solution ob = new Solution();
            List<Integer> res = ob.sumClosest(arr, target);
            if (res.isEmpty()) {
                System.out.print("[]");
            } else {
                for (Integer num : res) {
                    System.out.print(num + " ");
                }
            }
            System.out.println();
            System.out.println("~");
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {
    public List<Integer> sumClosest(int[] arr, int target) {
        // code here
        Arrays.sort(arr);
        List<Integer> ans = new ArrayList<>();
        int l = 0;
        int r = arr.length-1;
        int dist = Integer.MAX_VALUE;
        while(l < r){
            int sum = arr[l]+arr[r];
            if(Math.abs(target - sum ) < dist){
                dist = Math.abs(target-sum);
                ans.clear();
                ans.add(arr[l]);
                ans.add(arr[r]);
            }
            if(sum < target){
                l++;
            }
            else if(sum > target){
                r--;
            }else{
                return ans;
            }
            
        }
        return ans;
    }
}
