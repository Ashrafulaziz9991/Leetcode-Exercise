// problem link : https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

class Solution {
public:
    int digit_extract(int n){
        int cnt = 0;
        while(n > 0){
            int temp = n % 10;
            cnt++;
            n /= 10;
        }
        return cnt;
    }
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int i : nums){
            if(digit_extract(i) % 2 == 0)
                count++;
        }
        return count;
    }
};