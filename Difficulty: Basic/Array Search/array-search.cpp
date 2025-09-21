class Solution {
  public:
    int search(vector<int>& arr, int x) {
        // code here
        int ans = -1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==x){
                ans = i;
                break;
            }
        }
        return ans;
    }
};