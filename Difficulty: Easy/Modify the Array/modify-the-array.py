#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends
#User function Template for python3

class Solution:
      def modifyAndRearrangeArr (self, arr) : 
        #Complete the function
        n=len(arr)
        for i in range(n-1):
            if arr[i]!=0 and arr[i]==arr[i+1]:
                arr[i]=2*arr[i]
                arr[i+1]=0
        ans=[num for num in arr if num!= 0]
        s=len(ans)
        for i in range(s,n):
            ans.append(0)
        return ans

#{ 
 # Driver Code Starts.
#Initial Template for Python 3

if __name__ == "__main__":
    t = int(input())
    while t > 0:
        arr = list(map(int, input().split()))
        ob = Solution()
        ans = ob.modifyAndRearrangeArr(arr)
        print(*ans)
        print("~")
        t -= 1


# } Driver Code Ends