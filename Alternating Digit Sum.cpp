// problem link : https://leetcode.com/problems/alternating-digit-sum/description/


class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0;
        vector<int> v;
        while (n > 0) {
            int digit = n % 10;
            v.push_back(digit);
            n /= 10;
        }

        reverse(v.begin(), v.end());

        for (int i = 0; i < v.size(); i++)
            i % 2 == 0 ? sum += v[i] : sum -= v[i];

        return sum;
    }
};