class Solution {
public:
    int countSquare(vector<vector<int>>& mat, int x) {
        int n = mat.size();
        int m = mat[0].size();

        // Create prefix sum matrix with 1 extra row and column
        vector<vector<int>> prefix(n + 1, vector<int>(m + 1, 0));

        // Build prefix sum matrix
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                prefix[i + 1][j + 1] = mat[i][j] + prefix[i][j + 1] + prefix[i + 1][j] - prefix[i][j];
            }
        }

        int count = 0;

        // Try all square sizes from 1x1 to min(n, m)xmin(n, m)
        for (int k = 1; k <= min(n, m); ++k) {
            for (int i = k; i <= n; ++i) {
                for (int j = k; j <= m; ++j) {
                    int total = prefix[i][j] - prefix[i - k][j] - prefix[i][j - k] + prefix[i - k][j - k];
                    if (total == x) {
                        count++;
                    }
                }
            }
        }

        return count;
    }
};

