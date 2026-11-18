// https://leetcode.com/problems/two-out-of-three/

class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2,
                              vector<int>& nums3) {
        vector<int> ans;

        unordered_set<int> st(nums1.begin(), nums1.end());
        unordered_set<int> st2(nums2.begin(), nums2.end());
        unordered_set<int> st3(nums3.begin(), nums3.end());

        unordered_map<int, int> freq;

        for (auto i : st)
            freq[i]++;
        for (auto i : st2)
            freq[i]++;
        for (auto i : st3)
            freq[i]++;

        for (auto [k, v] : freq)
            if (v > 1)
                ans.push_back(k);
        return ans;
    }
};