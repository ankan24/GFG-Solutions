class Solution {
  public:
    vector<int> minHeightRoot(int V, vector<vector<int>>& edges) {
        // Code here
        if(V==1){
            return {0};
        }
        
        vector<vector<int>> adj(V);
        vector<int> degree(V, 0);
        
        
        for (auto &it : edges) {
            int u=it[0];
            int v=it[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
            degree[u]++;
            degree[v]++;
        }
        
        queue<int> q;
        
        for(int i=0; i<V;i++){
            if(degree[i]==1){
                q.push(i);
            }
        }
        
        int rem=V;
        
    
        while(rem > 2){
            int size=q.size();
            rem-=size;
            
            while(size--){
                int node=q.front();
                q.pop();
                
                for(auto &it : adj[node]){
                    degree[it]--;
                    
                    if(degree[it]==1){
                        q.push(it);
                    }
                }
            }
        }
        
        
        vector<int> ans;
        
        while(!q.empty()){
            ans.push_back(q.front());
            q.pop();
        }
        
        return ans;
    }
};