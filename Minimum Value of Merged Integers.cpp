class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int min_val = INT_MAX;

        for (size_t i = 0; i < nums.size(); i += 2) {
            std::string merged_str = std::to_string(nums[i]) + std::to_string(nums[i + 1]);

            long long merged_val = std::stoll(merged_str);

            if (merged_val < min_val) {
                min_val = static_cast<int>(merged_val);
            }
        }

        return min_val;
    }
};
