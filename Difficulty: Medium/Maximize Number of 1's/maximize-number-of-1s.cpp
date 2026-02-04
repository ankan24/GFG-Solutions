class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        int n=arr.size();
        int i=0,j=0,count=0,maxi=0;
        while(j<n){
            if(arr[j]==0) count++;
            while(count>k){
                if(arr[i]==0) count--;
                i++;
            }
            maxi=max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};
