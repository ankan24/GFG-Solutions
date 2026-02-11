class Solution:
    def minCost(self, heights, cost):
        def computeCost(target):
            total = 0
            for i in range(len(heights)):
                total += abs(heights[i] - target) * cost[i]
            return total
            
        left = min(heights)
        right = max(heights)
        answer = float('inf')
        
        while left <= right:
            mid = (left + right) // 2
            
            cost1 = computeCost(mid)
            cost2 = computeCost(mid + 1)
            
            answer = min(cost1, cost2)
            
            if cost1 < cost2:
                right = mid - 1
            else:
                left = mid + 1
                
        return answer
            