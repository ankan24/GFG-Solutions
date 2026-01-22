class Solution {
  public:
    int subarrayRanges(vector<int>& arr) {
        // code here
         stack<int> st;
        int lar_total=0;
        int sma_total=0;
        int n=arr.size();
        for(int i=0;i<arr.size();i++){
            while(!st.empty()&&arr[st.top()]<arr[i]){
                int num=arr[st.top()];
                int index=st.top();
                st.pop();
                int l_sub=st.empty()?index+1:index-st.top();
                int r_sub=i-index;
                lar_total+=(num*l_sub*r_sub);
            }
            st.push(i);
        }
        while(!st.empty()){
            int num=arr[st.top()];
            int index=st.top();
            st.pop();
            int l_sub=st.empty()?index+1:index-st.top();
            int r_sub=n-index;
                
            lar_total+=(num*l_sub*r_sub);
        }
        for(int i=0;i<arr.size();i++){
            while(!st.empty()&&arr[st.top()]>arr[i]){
                int num=arr[st.top()];
                int index=st.top();
                st.pop();
                int l_sub=st.empty()?index+1:index-st.top();
                int r_sub=i-index;
                
                sma_total+=(num*l_sub*r_sub);
            }
            st.push(i);
        }
        while(!st.empty()){
            int num=arr[st.top()];
            int index=st.top();
            st.pop();
            int l_sub=st.empty()?index+1:index-st.top();
            int r_sub=n-index;
                
            sma_total+=(num*l_sub*r_sub);
        }
        return lar_total-sma_total;
    }
};