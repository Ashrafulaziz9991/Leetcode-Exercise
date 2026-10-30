// https://leetcode.com/problems/unique-3-digit-even-numbers/

class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int> tmp, ans;
        int k = 3;
        sort(digits.begin(), digits.end());

        do {
            int res = 0;
            for (int i = 0; i < k; ++i)
                res = res * 10 + digits[i];

            tmp.push_back(res);
            // Reverse the suffix so next_permutation only changes the prefix
            reverse(digits.begin() + k, digits.end());

        } while (next_permutation(digits.begin(), digits.end()));

        for (int i : tmp)
            i % 2 == 0 && (i >= 100 && i < 999) ? ans.push_back(i) : void();
        return ans.size();
    }
};