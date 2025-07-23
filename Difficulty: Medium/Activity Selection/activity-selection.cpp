class Solution {
  public:
    int activitySelection(vector<int> &start, vector<int> &finish) {
        // code here
        vector<pair<int,int>> arr;
        for(int i=0;i<start.size();i++){
            arr.push_back({finish[i],start[i]});
        }
        sort(arr.begin(),arr.end());
        int c = 1;
        int recentend = arr[0].first;
        for(int i=0;i<start.size();i++){
            if(arr[i].second > recentend){
                c++;
                recentend = arr[i].first;
            }
        }
        return c;
    }
};