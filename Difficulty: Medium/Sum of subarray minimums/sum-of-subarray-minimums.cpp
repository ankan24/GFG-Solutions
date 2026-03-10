class Solution {
  public:
    int sumSubMins(vector<int> &arr) {
        int ans = 0;
        stack<int> st;
        st.push(-1);
        for(int i = 0;i<arr.size();i++){
            while(st.size()>1 and arr[i]<arr[st.top()]){
                int j = st.top();
                st.pop();
                ans += arr[j]*(i-j)*(j-st.top());
            }
            st.push(i);
        }
        while(st.size()>1){
            int j = st.top();
            st.pop();
            ans += arr[j]*(arr.size()-j)*(j-st.top());
        }
        
        return ans;
    }
};