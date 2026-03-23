 class Solution {
    public int longestCycle(int V, int[][] edges) {
        // code here
         int[] next = new int[V];
        Arrays.fill(next, -1);

        for (int[] e : edges) {
            next[e[0]] = e[1];
        }

        boolean[] visited = new boolean[V];
        int[] time = new int[V];

        int ans = -1;
        int timer = 1;

        for (int i = 0; i < V; i++) {

            if (visited[i]) continue;

            int startTime = timer;
            int node = i;

            while (node != -1 && !visited[node]) {

                visited[node] = true;
                time[node] = timer++;
                node = next[node];
            }
            if (node != -1 && time[node] >= startTime) {
                ans = Math.max(ans, timer - time[node]);
            }
        }

        return ans;
    }
}

