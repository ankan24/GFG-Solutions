class Solution {
  public:
    string removeKdig(string &s, int k) {
        // code here
        string st;  // works as stack

        for (char c : s) {
            while (!st.empty() && k > 0 && st.back() > c) {
                st.pop_back();
                k--;
            }
            st.push_back(c);
        }

        // If still need to remove digits
        while (k > 0 && !st.empty()) {
            st.pop_back();
            k--;
        }

        // Remove leading zeros
        int i = 0;
        while (i < st.size() && st[i] == '0') i++;

        string ans = st.substr(i);

        if (ans.empty()) return "0";
        return ans;
    }
};