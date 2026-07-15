// problem link : https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/description/

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int moves = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() / 2; i++)
            moves += nums[nums.size() - 1 - i] - nums[i];
        return moves;
    }
};