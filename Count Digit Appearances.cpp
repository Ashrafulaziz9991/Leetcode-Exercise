// problem link : https://leetcode.com/problems/count-digit-appearances

class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        auto count = [](int n, int k){
            int cnt = 0;
            while(n > 0){
                int d = n % 10;
                if(d == k)
                    cnt++;
                n /= 10;
            }
            return cnt;
        };

        int sum = 0;
        for(int i : nums)
            sum += count(i, digit);
        return sum;
    }
};