class Solution {
  public:
    vector<int> missinRange(vector<int>& arr, int low, int high) {
        // code here
        unordered_map<int,int>mp;
        vector<int>v;
        for(int i: arr)
        mp[i]++;
        
        for(int i=low; i<=high; i++)
        {
            if(mp[i]==0)
            v.push_back(i);
        }
        return v;
    }
};