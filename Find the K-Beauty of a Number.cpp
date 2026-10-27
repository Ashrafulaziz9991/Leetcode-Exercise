// https://leetcode.com/problems/find-the-k-beauty-of-a-number/

class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string gain = to_string(num);
        int cnt = 0;
        for (int i = 0; i <= gain.size() - k; i++) {
            int tmp = 0;
            for (int j = i; j < i + k; j++) {
                tmp = tmp * 10 + gain[j] - '0';
            }
            if (tmp != 0 && num % tmp == 0)
                cnt++;
        }
        return cnt;
    }
};