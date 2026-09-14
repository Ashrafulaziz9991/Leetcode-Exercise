// // problem link : https://leetcode.com/problems/finding-3-digit-even-numbers/description/

class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int>tmp, ans;
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

        auto digi_cont = [](int n) {
            int cnt = 0;
            while (n > 0) {
                int digit = n % 10;
                cnt++;
                n /= 10;
            }
            return cnt;
        };

        for (int i : tmp)
            i % 2 == 0 && digi_cont(i) == 3 ? ans.push_back(i) : void();
        return ans;
    }
};