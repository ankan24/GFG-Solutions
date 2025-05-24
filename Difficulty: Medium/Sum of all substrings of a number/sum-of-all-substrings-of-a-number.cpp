class Solution {
  public:
     int sumSubstrings(string &s) {
        // code here
        int n=s.size();
        if(n==1) return s[0]-'0';
        int ans=0;
        
        for(int i=0;i<n;i++){
            int tempAns=0;
            
            tempAns+=s[i]-'0';
            ans+=tempAns;
            for(int j=i+1;j<n;j++){
                
                tempAns=(tempAns*10)+(s[j]-'0');
                ans+=tempAns;
            }
            
        }
        return ans;
    }


};