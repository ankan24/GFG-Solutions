class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
        int n=arr.size();
        int maxi=1;
        
        int i=0, j=0;
        
        unordered_map<int, int>mpp;
        
        for(; j<n; j++){
            mpp[arr[j]]++;
            for(; i<n && mpp.size()>2; i++){
                mpp[arr[i]]--;
                if(mpp[arr[i]]==0) mpp.erase(arr[i]);
            }
            maxi=max(maxi, j-i+1);
        }
        
        return maxi;
    }
};