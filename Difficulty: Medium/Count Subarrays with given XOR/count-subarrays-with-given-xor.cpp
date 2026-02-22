class Solution {
  public:
    virtual long subarrayXor(vector<int> &arr, int k){
      int n=arr.size();
      vector<int> xorArr(n);
      xorArr[0]=arr[0];
      
      for(int i=1; i<n; i++) xorArr[i]=xorArr[i-1]^arr[i];
      
      unordered_map<int, long> visited;
      long ans=0LL;
      
      for(int x: xorArr){
        if(x==k) ans++;
        int req=x^k;
        if(visited.find(req)!=visited.end()) ans+=visited[req];
        visited[x]++;
      }
      return ans;
    }
};