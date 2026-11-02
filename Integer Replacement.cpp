// https://leetcode.com/problems/integer-replacement/

class Solution {
public:
    int integerReplacement(int n) {
        long long x = n;
        int cnt = 0, cnt2 = 0;
        while(x != 1){
            if(x == 3)
                x--;
            else if(x % 2 == 0)
                x /= 2;
            else if(x % 4 == 1)
                x--;
            else
                x++;
            cnt++;
        }

        return cnt;
    }
};