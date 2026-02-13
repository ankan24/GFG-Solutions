class Solution {
    public boolean helper(int arr[],int mid , int k) {
        int sumi = 0,count = 1;
        for(int x:arr){
            sumi += x;
            if(sumi > mid){
                count ++;
                sumi = x;
            }
            
        }
        return count <= k;
    }
    public int minTime(int[] arr, int k) {
        // code here
        int low = 0;
        int high = 0;
        for(int x:arr){
            low = Math.max(low , x);
            high += x;
        }
        int ans = 0;
        while(low <= high){
            int mid = (low+high) >> 1;
            if(helper(arr,mid , k) == true){
                ans = mid;
                high = mid - 1;
            }else 
               low = mid + 1;
        }
        return ans;
    }
}