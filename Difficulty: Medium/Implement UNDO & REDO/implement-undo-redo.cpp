class Solution {
  public:
    string ans = "";
    string k = "";
    
    
    void append(char x) {
        // append x into document
        ans += x;
    }

    void undo() {
        // undo last change
        if(!ans.empty()){
            k.push_back(ans.back());
            ans.pop_back();
        }
    }

    void redo() {
        // redo changes
        if(!k.empty()){
            ans.push_back(k.back());
            k.pop_back();
        }
    }

    string read() {
        // read the document
        return ans;
    }
};