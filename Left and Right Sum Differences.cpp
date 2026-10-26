// https://leetcode.com/problems/left-and-right-sum-differences/

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size(), sumleft = 0, sumright = 0;
        vector<int> answer(n), rightsum(n), leftsum(n);

        for (int i = 0; i < n; i++) {
            leftsum[i] = sumleft;
            sumleft += nums[i];
        }

        for (int i = n - 1; i >= 0; i--) {
            rightsum[i] = sumright;
            sumright += nums[i];
        }

        for (int i = 0; i < n; i++)
            answer[i] = abs(rightsum[i] - leftsum[i]);
        return answer;
    }
};