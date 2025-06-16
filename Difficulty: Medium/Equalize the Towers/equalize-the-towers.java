class Solution {
    public int minCost(int[] heights, int[] cost) {
        int low = Integer.MAX_VALUE;
        int high = Integer.MIN_VALUE;


        for (int h : heights) {
            low = Math.min(low, h);
            high = Math.max(high, h);
        }

        
        while (high - low > 2) {
            int mid1 = low + (high - low) / 3;
            int mid2 = high - (high - low) / 3;

            long cost1 = getTotalCost(heights, cost, mid1);
            long cost2 = getTotalCost(heights, cost, mid2);

            if (cost1 < cost2) {
                high = mid2;
            } else {
                low = mid1;
            }
        }


        long result = Long.MAX_VALUE;
        for (int h = low; h <= high; h++) {
            result = Math.min(result, getTotalCost(heights, cost, h));
        }

        return (int) result;
    }

    private long getTotalCost(int[] heights, int[] cost, int targetHeight) {
        long total = 0;
        for (int i = 0; i < heights.length; i++) {
            total += 1L * Math.abs(heights[i] - targetHeight) * cost[i];
        }
        return total;
    }
}
