 class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        // code here
        unordered_map<int, bool> mp;
        for(int i: arr){
            // mp[i*i]=1;
            mp[i*i]=1;
        }
        for(int i=0; i<arr.size(); i++){
            for(int j= i+1; j<arr.size(); j++){
                if(mp.find(arr[i]*arr[i] + arr[j]*arr[j])!=mp.end())
                return true;
            }
        }
        return false;
    }
};

