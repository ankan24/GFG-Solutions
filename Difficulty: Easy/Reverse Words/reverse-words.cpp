class Solution {
  public:
    string reverseWords(string &s) {
    string ans = "";
    string temp = "";
    vector<string> words;
 
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '.') {
            if (!temp.empty()) {
                words.push_back(temp);
                temp.clear();
            }
        } else {
            temp += s[i];
        }
    }
 
    if (!temp.empty()) {
        words.push_back(temp);
    }
 
    for (int i = words.size() - 1; i >= 0; --i) {
        ans += words[i];
        if (i != 0) {
            ans += ".";
        }
    }

    return ans;
    }
};