// https://leetcode.com/problems/shuffle-the-array/description/

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> fst, snd;
        int sz = nums.size();
        for (int i = 0; i < n; i++)
            fst.push_back(nums[i]);
        for (int i = n; i < nums.size(); i++)
            snd.push_back(nums[i]);

        nums.clear();
        for (int i = 0; i < n; i++) {
            nums.push_back(fst[i]);
            nums.push_back(snd[i]);
        }
        return nums;
    }
};