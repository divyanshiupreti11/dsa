class Solution {
public:
    int minOperations(vector<int>& nums) {

        int n = nums.size();

        if(n <= 1)
            return 0;

        bool is_inc = true;
        bool is_dec = true;

        int zero_idx = -1;

        for(int i = 0; i < n; i++) {

            if(nums[i] == 0)
                zero_idx = i;

            if(nums[(i + 1) % n] != (nums[i] + 1) % n)
                is_inc = false;

            if(nums[(i + 1) % n] != (nums[i] - 1 + n) % n)
                is_dec = false;
        }

        if(is_inc) {

            if(zero_idx == 0)
                return 0;

            return min(zero_idx, n - zero_idx + 2);
        }

        if(is_dec) {

            return min((zero_idx + 1) % n + 1, n - zero_idx);
        }

        return -1;
    }
};
