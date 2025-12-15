// problem link : https://leetcode.com/problems/permutations/

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> N;
        N.push_back(nums);
        sort(nums.begin(), nums.end());

        while (next_permutation(nums.begin(), nums.end())) {
            N.push_back(nums);
        }
        return N;
    }
};