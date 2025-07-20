class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& arr, int k) {
        // Code here
        vector<int> sm = arr;
        vector<int> lg = arr;
        vector<int> ans;
        sort(sm.begin(),sm.end());
        sort(lg.begin(),lg.end(),greater<int>());
        int min=0 , max=0;
        int i = 0 , j = sm.size()-1;
        while(i<=j){
            min += sm[i];
            i++;
            j -= k;
        }
        
        i=0 , j = lg.size()-1;
        while(i<=j){
            max += lg[i];
            i++;
            j -= k;
        }
        ans.push_back(min);
        ans.push_back(max);
        return ans;
    }
};