class Solution {
    public int countSubarrays(int[] arr) {
        // code here
        int n = arr.length;
        var stk = new Stack<Integer>();
        int cnt = 0;
        
        for (int i = 0; i < n; i++) {
            while (!stk.isEmpty() && stk.peek() > arr[i])
                stk.pop();
            stk.push(arr[i]);
            cnt += stk.size();
        }
        return cnt;
    }
}