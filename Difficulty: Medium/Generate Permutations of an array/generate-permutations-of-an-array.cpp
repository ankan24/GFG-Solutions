class Solution {
  public:
    vector<vector<int>> permuteDist(vector<int>& arr) {
        // code here
        set<vector<int>> st;
        vector<vector<int>> permutations;
        vector<int> temp = arr;
        do {st.insert(arr);}while(next_permutation(arr.begin(), arr.end()));
        do {st.insert(temp);}while(prev_permutation(temp.begin(), temp.end()));
        for(vector<int> v : st)
           permutations.push_back(v); 
    
        return permutations;
    }
};