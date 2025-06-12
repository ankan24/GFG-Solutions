 class Solution {
    public int[] printKClosest(int[] arr, int k, int x) {
        int n = arr.length;
        int idx = Arrays.binarySearch(arr, x);
        
        if (idx < 0) idx = -(idx + 1); // Adjust index if x isn't in the array
/*
        Let's say arr = [1, 3, 5, 7], x = 4.

        • Arrays.binarySearch(arr, 4) returns -3 (4 would be inserted at index 2).
        
        • So we adjust with: idx = -( -3 + 1 ) = 2.
        
        • Now idx is the position where x would be inserted.
*/
        
        int i = idx - 1;
        int j = idx;
        if (j < n && arr[j] == x) {
            j++;
        }

        List<Integer> ans = new ArrayList<>();
        int cnt = 0;

        while (i >= 0 && j < n && cnt < k) {
            if (Math.abs(arr[i] - x) < Math.abs(arr[j] - x)) {
                ans.add(arr[i]);
                i--;
            }
            else if(Math.abs(arr[i]-x) > Math.abs(arr[j]-x)){
                ans.add(arr[j]);
                j++;
            }
            else {
                ans.add(arr[j]);
                j++;
            }
            cnt++;
        }

        while (i >= 0 && cnt < k) {
            ans.add(arr[i]);
            i--;
            cnt++;
        }

        while (j < n && cnt < k) {
            ans.add(arr[j]);
            j++;
            cnt++;
        }

        return ans.stream().mapToInt(Integer::intValue).toArray();
    }
}