// problem link : https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/description/

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans(n);
        ans[0] = n * (n - 1) / 2;
        for(int i = 1; i < n; i++) ans[i] = -i;
        return ans;
    }
};

/*

for instance

n = 6

ans[0] = 6 * (6 - 1) / 2 = 15

ans[1] = -1
ans[2] = -2
ans[3] = -3
ans[4] = -4
ans[5] = -5

(proved)

*/