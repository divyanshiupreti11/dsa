class Solution {
public:
    vector<int> countTasks(vector<int>& tasks, vector<int>& shifts) {
           int n = tasks.size();
        int m = shifts.size();

        std::vector<long long> pref(n);
        pref[0] = tasks[0];
        for (int i = 1; i < n; ++i) {
            pref[i] = pref[i - 1] + tasks[i];
        }

        long long total_task_time = pref.back();
        long long current_work = 0;

        std::vector<int> ans(m);

        for (int j = 0; j < m; ++j) {
            current_work += shifts[j];

            if (current_work >= total_task_time) {
                ans[j] = 0;
                current_work = 0;
            } else {
                int completed_count = std::upper_bound(pref.begin(), pref.end(), current_work) - pref.begin();
                ans[j] = n - completed_count;
            }
        }

        return ans;
    }
};
