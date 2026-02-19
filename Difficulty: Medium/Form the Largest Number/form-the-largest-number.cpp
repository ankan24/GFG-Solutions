class Solution {
  public:
    string findLargest(vector<int> &arr) {
        // code here
         vector<string> sample;
        for (int num : arr) {
            sample.push_back(to_string(num));
        }

        sort(sample.begin(), sample.end(), [](const string& a, const string& b) {
            return (a + b) > (b + a);
        });

        if (sample[0] == "0") {
            return "0";
        }

        string ans = "";
        for (const string& s : sample) {
            ans += s;
        }

        return ans;
    }
};