class Solution {
public:
    int sortableIntegers(vector<int>& nums) {
        int n = nums.size();
        vector<int> sorted_nums = nums;
        sort(sorted_nums.begin(), sorted_nums.end());
        
        long long totalSum = 0;
        
        for (int k = 1; k <= n; k++) {
            if (n % k == 0) {
                if (isCheck(nums, sorted_nums, n, k)) {
                    totalSum += k;
                }
            }
        }
        return (int)totalSum;
    }

private:
    bool isCheck(const vector<int>& nums, const vector<int>& target, int n, int k) {
        for (int i = 0; i < n; i += k) {
            if (!isRotation(nums, target, i, k)) return false;
        }
        return true;
    }

    bool isRotation(const vector<int>& nums, const vector<int>& target, int start, int k) {
        vector<int> v1, v2;
        for(int j = 0; j < k; j++) {
            v1.push_back(nums[start + j]);
            v2.push_back(target[start + j]);
        }
        
        vector<int> temp = v1;
        sort(temp.begin(), temp.end());
        if (temp != v2) return false;

        int dips = 0;
        for (int i = 0; i < k - 1; i++) {
            if (v1[i] > v1[i + 1]) dips++;
        }
        
        if (dips == 0) return true;
        if (dips == 1 && v1[k - 1] <= v1[0]) return true;
        
        return false;
    }
};
