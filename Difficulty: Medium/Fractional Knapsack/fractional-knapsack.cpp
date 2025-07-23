// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

class Solution {
  public:
  
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        int  n = val.size();
        vector<pair<double,int>> ratio;
        for(int i=0;i<n;i++){
            double r = (double)val[i]/wt[i];
            ratio.push_back({r,i});
        }
        
    sort(ratio.begin(), ratio.end(), [](pair<double, int>& a, pair<double, int>& b) {
    return a.first > b.first;
    });

        
        double ans = 0.0;
        for(int i=0;i<n && capacity >0;i++){
            int idx = ratio[i].second;
            if(wt[idx] <= capacity){
                ans += val[idx];
                capacity -= wt[idx];
            }else{
                ans += ratio[i].first * capacity;
                capacity = 0;
            }
        }
        return ans;
    }
};

