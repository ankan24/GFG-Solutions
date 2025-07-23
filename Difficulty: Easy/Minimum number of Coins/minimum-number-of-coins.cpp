// User function Template for C++

class Solution {
  public:
    vector<int> minPartition(int N) {
        // code here
        vector<int> coins = {1,2,5,10,20,50,100,200,500,2000};
        sort(coins.begin(),coins.end(), greater<int>());
        vector<int> ans;
        int i=0;
        while(N > 0){
            int count = N/coins[i];
            N -= count*coins[i];
            while(count){
                ans.push_back(coins[i]);
                count--;
            }
            i++;
        }
        return ans;
    }
};