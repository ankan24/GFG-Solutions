class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(vector<int>& start, vector<int>& end) {
        // Your code here
        vector<pair<int,int>> arr;
        for(int i=0;i<start.size();i++){
            arr.push_back({end[i],start[i]});
        }
        
        sort(arr.begin(),arr.end());
        int c = 1;
        int cend = arr[0].first;
        for(int i=0;i<arr.size();i++){
            if(cend < arr[i].second){
                c++;
                cend = arr[i].first;
            }
        }
        return c;
    }
};