class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        priority_queue<int,vector<int>, greater<int>> pq;
        
        for(int i=0;i<arr.size();i++){
            pq.push(arr[i]);
        }
        
        int ans = 0;
        while(pq.size() > 1){
            int f = pq.top();
            pq.pop();
            int s = pq.top();
            pq.pop();
            ans += f+s;
            pq.push(f+s);
        }
        return ans;
    }
};