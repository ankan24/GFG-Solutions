class Solution:
    def maxSubarraySum(self, arr, k):
        # code here 
        n = len(arr)
        if n<k or k<=0 :
            return 0 
            
        win_sum = sum(arr[:k])
        max_sum = win_sum
        
        for i in range(k,n) :
            win_sum += arr[i]-arr[i-k]
            max_sum = max(max_sum,win_sum)
        return max_sum