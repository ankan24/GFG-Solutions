 class Solution {
    public int countPaths(int[][] edges, int V, int src, int dest) {
        // Code here
        List<List<Integer>> adj=new ArrayList<>();
        for(int i=0;i<V;i++) adj.add(new ArrayList<>());
        for(int[] e:edges) adj.get(e[0]).add(e[1]);
        boolean vis[]=new boolean[V];
        int dp[]=new int[V];
        Arrays.fill(dp,-1);
        return rec(src,dest,adj,vis,dp);
    }
    private int rec(int i,int des,List<List<Integer>> adj,boolean[] vis,int dp[]){
        if(i==des) return 1;
        if(vis[i]) return 0;
        if(dp[i]!=-1) return dp[i];
        vis[i]=true;
        int paths=0;
        for(int neighbour:adj.get(i)){
            paths+=rec(neighbour,des,adj,vis,dp);
        }
        vis[i]=false;
        return dp[i]=paths;
    }
}