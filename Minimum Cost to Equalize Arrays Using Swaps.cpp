class Solution {
public:
    int minCost(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int> freq;

        for(int x : nums1) freq[x]++;
        for(int x : nums2) freq[x]--;

        int extra = 0;

        for(auto &p : freq){
            if(abs(p.second) % 2) return -1;
            extra += abs(p.second) / 2;
        }

        return extra / 2;
    }
};
