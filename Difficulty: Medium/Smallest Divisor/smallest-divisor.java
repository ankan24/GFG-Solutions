 class Solution {
    int smallestDivisor(int[] arr, int k) {
        // Code here
        int l=1,r=arr[0];
        for(int i:arr) r=Math.max(r,i);
        while(l<=r){
            int mid=l+(r-l)/2;
            if(possible(arr,mid,k)) r=mid-1;
            else l=mid+1;
        }
        return l;
    }
    private boolean possible(int arr[],int divisor,int k){
        int sum=0;
        for(int i:arr) sum+=Math.ceil((double)i/(double)divisor);
        return sum<=k;
    }
}