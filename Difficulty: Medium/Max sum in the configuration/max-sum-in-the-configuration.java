class Solution {
    int maxSum(int[] arr) {
        // Your code here
        int sum=0;
        int window=0;
        int n =arr.length;
        for(int i=0;i<arr.length;i++){
        sum+=arr[i];
        window+=arr[i]*i;
        }
        int ans=window;
        for(int i=0;i<n;i++){
            int diff=sum-arr[i];
            int add=arr[i]*(n-1);
            window=window-diff+add;
            // System.out.println(window);
            ans= Math.max(window,ans);
            
        }
        return ans;
    }
}