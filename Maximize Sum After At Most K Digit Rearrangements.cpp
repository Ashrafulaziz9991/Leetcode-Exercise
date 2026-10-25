// https://leetcode.com/problems/maximize-sum-after-at-most-k-digit-rearrangements/

class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        long long sum = 0;
        vector<int> ans;

        for (int i : nums) {
            sum += i;

            string s = to_string(i);
            sort(s.begin(), s.end(), greater<char>());

            int rearranged = stoi(s);
            ans.push_back(rearranged - i);
        }

        sort(ans.rbegin(), ans.rend());

        for (int i = 0; i < k; i++) sum += ans[i];

        return sum;
    }
};