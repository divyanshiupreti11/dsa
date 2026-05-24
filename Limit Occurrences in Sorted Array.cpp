class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int> ans;

        for(int num : nums) {

            // first k elements can always be added
            if(ans.size() < k || ans[ans.size() - k] != num) {
                ans.push_back(num);
            }
        }

        return ans;
    }
};
