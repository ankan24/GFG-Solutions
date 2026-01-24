class Solution:
    def josephus(self, n, k):
        # code here
        res = 0
        for i in range(2,n+1) :
            res = (res+k)%i
        return res+1