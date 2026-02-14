class Solution {
    public int findMinDiff(ArrayList<Integer> arr, int m) {
        int res=Integer.MAX_VALUE;
         Collections.sort(arr);
         for(int i=0;i<arr.size()-m+1;i++){
             int min=arr.get(i);
             int max=arr.get(i+m-1);
             res=Math.min(res,max-min);
         }
         return res;
        
    }
}