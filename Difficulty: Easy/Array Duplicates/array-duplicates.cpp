class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        vector<int> ans;
        map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        
        for(auto ele : mp){
            if(ele.second > 1){
                 ans.push_back(ele.first);
            }
        }
        return ans;
    }
};