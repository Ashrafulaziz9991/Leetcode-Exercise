// https://leetcode.com/problems/three-consecutive-odds/

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        auto odd = [](int n) { return n % 2 != 0; };
        if (arr.size() < 3) return false;
        for (int i = 0; i < arr.size()-2; i++) {
            if (odd(arr[i]) && odd(arr[i + 1]) && odd(arr[i + 2])) {
                return true;
            }
        }
        return false;
    }
};