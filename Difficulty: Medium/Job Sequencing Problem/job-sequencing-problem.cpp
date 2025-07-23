 class Solution {
  public:
    struct Jobs {
        int id;
        int profit;
        int deadline;
    };

    static bool cmp(Jobs a, Jobs b) {
        return a.profit > b.profit;
    }

    int findParent(vector<int>& parent, int x) {
        if (parent[x] == x) return x;
        return parent[x] = findParent(parent, parent[x]); // Path compression
    }

    vector<int> jobSequencing(vector<int>& deadline, vector<int>& profit) {
        int n = profit.size();
        vector<Jobs> arr(n);

        for (int i = 0; i < n; i++) {
            arr[i] = {i + 1, profit[i], deadline[i]};
        }

        sort(arr.begin(), arr.end(), cmp);

        int maxDeadline = 0;
        for (auto &job : arr) {
            maxDeadline = max(maxDeadline, job.deadline);
        }

        vector<int> parent(maxDeadline + 1);
        for (int i = 0; i <= maxDeadline; i++) parent[i] = i;

        int cnt = 0, totalProfit = 0;

        for (auto &job : arr) {
            int availableSlot = findParent(parent, job.deadline);
            if (availableSlot > 0) {
                cnt++;
                totalProfit += job.profit;
                parent[availableSlot] = availableSlot - 1; // Union
            }
        }

        return {cnt, totalProfit};
    }
};
