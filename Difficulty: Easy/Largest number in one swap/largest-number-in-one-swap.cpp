class Solution {
  public:
    string largestSwap(string &s) {
        int n  = s.size();
        vector<int> maxRight(n,-1); // contains the indexes
        int maxi = -1;
        int maxIndex =-1;
        
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]-'0' > maxi)
            {
                maxi = s[i]-'0';
                maxIndex = i;
                maxRight[i] = maxIndex; // update the index
            }
            else
            {
                maxRight[i] = maxIndex;
            }
        }
        
        for(int i=0;i<s.size();i++)
        {
            if(s[maxRight[i]] - '0'> (s[i]-'0'))
            {
                swap(s[maxRight[i]],s[i]);
                return s;
            }
        }
        return s;
    }
};