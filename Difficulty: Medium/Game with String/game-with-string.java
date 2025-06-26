class Solution {
    public int minValue(String s, int k) {
        HashMap<Character, Integer> freq = new HashMap<>();
        
        for (char ch: s.toCharArray()) {
            freq.put(ch, freq.getOrDefault(ch, 0) + 1);
        }
        
        PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());
        
        for (char ch: freq.keySet()) {
            pq.offer(freq.get(ch));
        }
        
        while (k-- > 0) {
            int newValue = pq.poll() - 1;
            pq.offer(newValue);
        }
        
        int product = 0;
        while (!pq.isEmpty()) {
            int val = pq.poll();
            product += val * val;
        }
        
        return product;
    }
}