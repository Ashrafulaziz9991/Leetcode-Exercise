// https://leetcode.com/problems/max-number-of-k-sum-pairs/

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int ans = 0;
        for (int i : nums)
            freq[k - i] > 0 ? ans++, freq[k - i]-- : freq[i]++;
        return ans;
    }
};