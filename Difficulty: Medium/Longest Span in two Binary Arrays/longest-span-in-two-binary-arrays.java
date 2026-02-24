class Solution {
    public int equalSumSpan(int[] a1, int[] a2) {
        // code here
           int n = a1.length;
        Map<Integer, Integer> map = new HashMap<>();
        int maxLen = 0;
        int diff = 0;

        for (int i = 0; i < n; i++) {
            diff += (a1[i] - a2[i]);

            if (diff == 0) {
                maxLen = i + 1; // span from 0 to i
            }

            if (map.containsKey(diff)) {
                maxLen = Math.max(maxLen, i - map.get(diff));
            } else {
                map.put(diff, i);
            }
        }
        return maxLen;
    }
}