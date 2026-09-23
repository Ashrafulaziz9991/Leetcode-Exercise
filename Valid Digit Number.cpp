// https://leetcode.com/problems/valid-digit-number/

class Solution {
public:
    bool validDigit(int n, int x) {
        auto it = [](int n , int x){
            int cnt = 0;
            while(n > 0){
                int d = n % 10;
                if(d == x)
                    cnt++;
                n /= 10;
            }
            return cnt;
        };

        int tmp = n;
        while(tmp >= 10) tmp /= 10;
            
        if(it(n, x) >= 1 && tmp != x) return true;

        return false;
    }
};