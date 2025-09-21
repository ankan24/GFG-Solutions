class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int c = 0;
        int l = 0;
        int r = arr.size()-1;
        int lmx = 0;
        int rmx = 0;
        
        while(l<r){
            lmx = max(lmx , arr[l]);
            rmx = max(rmx , arr[r]);
            
            if(lmx < rmx){
                c += lmx-arr[l];
                l++;
            }
            else{
                c+= rmx-arr[r];
                r--;
            }
        }
        return c;
    }
};