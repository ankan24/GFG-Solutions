class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        // Code Here
        set<int>s1(arr1.begin(), arr1.end());
        set<int>s2(arr2.begin(), arr2.end());
        set<int>s3(arr3.begin(), arr3.end());
        
        map<int,int>m;
        for(auto x : s1) m[x]++;
        for(auto x : s2) m[x]++;
        for(auto x : s3) m[x]++;
        
        
        vector<int>ans;
       for(auto i : m){
            if(i.second==3){
                ans.push_back(i.first);
            }
        }
        
        if(ans.size()!=0){
            return ans;
        }else{
            return vector<int>{-1};
        }
    }
};