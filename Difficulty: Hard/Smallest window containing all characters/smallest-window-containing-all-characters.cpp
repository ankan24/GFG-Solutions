class Solution {
  public:
    string minWindow(string &s, string &p) {
        // code here
        int st = 0;
        int arr[26]{0} , arr1[26]{0};
        for(auto i: p)arr1[i-'a']++;
        int start = -1 , end = INT_MAX-6;
        for(int i=0;i<s.size() ; i++){
            arr[s[i]-'a']++;
            bool ck = true;
            for(int j = 0 ; j<26 ; j++){
                if(arr[j] <arr1[j])ck = false;
            }
            if(ck){
                while(arr[s[st]-'a'] > arr1[s[st]-'a']){
                    arr[s[st]-'a']--;
                    st++;
                }
                if(i-st < end-start){
                    start = st;
                    end = i;
                }
            }
        }
        if(start ==-1)return "";
        return s.substr(start , end-start+1);
    }
};