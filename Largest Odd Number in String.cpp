// https://leetcode.com/problems/largest-odd-number-in-string/

class Solution {
public:
    string largestOddNumber(string num) {
        string ans = "";
        int i = 0, j = num.size() - 1;
        bool flag = false;
        while (i <= j) {
            if (num[i] == '0') {
                i++;
            }
            if ((num[j] - '0') % 2 != 0) {
                flag = true;
                break;
            }
            j--;
        }
        if (!flag)
            return ans;

        for (int k = i; k <= j; k++)
            ans += num[k];
        return ans;
    }
};