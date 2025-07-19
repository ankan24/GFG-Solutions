// User function Template for C++

class Solution {
  public:
    vector<int> maxMeetings(int N, vector<int> &S, vector<int> &F) {
        vector<int> ans;
        vector<tuple<int,int,int>> arr;
        for(int i=0;i<N;i++){
            arr.push_back(make_tuple(F[i],S[i],i+1));
        }
        sort(arr.begin(),arr.end());
        int lend = 0;
        for(auto ele : arr){
            int e = get<0>(ele);
            int s = get<1>(ele);
            int idx = get<2>(ele);
            
            if(s > lend){
                ans.push_back(idx);
                lend = e;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};