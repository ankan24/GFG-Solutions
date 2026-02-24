class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k) {
        // Code here
        int n=(int)arr.size();
        int res=0;
        
        map<int,int>mp;
        mp[0]=-1;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>k)
            sum++;
            else
            sum--;
            
            if(mp.find(sum)==mp.end())
            mp[sum]=i;
            
            if(mp.find(sum-1)!=mp.end())
            res=max(res,i-mp[sum-1]);
            
            if(sum>0)
            res=max(res,i+1);
            
        }
        return res;
    }
};