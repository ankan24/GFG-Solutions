//{ Driver Code Starts
import java.io.*;
import java.util.*;

class Sorting {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        for (int g = 0; g < t; g++) {
            String[] str = (br.readLine()).trim().split(" ");
            int arr[] = new int[str.length];
            for (int i = 0; i < str.length; i++) arr[i] = Integer.parseInt(str[i]);
            System.out.println(new Solution().inversionCount(arr));
            System.out.println("~");
        }
    }
}
// } Driver Code Ends


// User function Template for Java

 class Solution {
    // Function to count inversions in the array.
    static int inversionCount(int arr[]) {
        int temp[] = new int[arr.length];
        return mergeSort(arr,temp,0,arr.length-1);
    }
    static int mergeSort(int []arr,int[]temp, int low, int high){
        if(low>=high){
            return 0;
        }
        int mid = (low+high)/2;
        int invCount = mergeSort(arr,temp,low,mid);
        invCount += mergeSort(arr,temp,mid+1, high);
        invCount += merge(arr,temp,low,mid,high);
        return invCount;
    }
    static int merge(int []arr,int[]temp, int low, int mid, int high){
        int count = 0;
        int i = low;
        int j = mid+1;
        int k = low;
        while(i<=mid && j<=high){
            if(arr[i]<=arr[j]){
                temp[k++] = arr[i++];
            }else{
                temp[k++] =arr[j++];
                count += mid-i+1;
            }
        }
        
        while(i<=mid){
            temp[k++] = arr[i++];
        }
        while(j<=high){
            temp[k++] = arr[j++];
        }
        
        for(int idx = low; idx<=high; idx++){
            arr[idx] = temp[idx];
        }
        
        return count;

    }
}