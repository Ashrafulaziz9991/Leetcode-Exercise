// https://leetcode.com/problems/sum-of-all-odd-length-subarrays/description/

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0, k = 1, n = arr.size(), sumfull = 0;

        while (k <= n) {
            int window_sum = 0;
            for (int i = 0; i < k; i++){
                window_sum += arr[i];
            }
            sum += window_sum;

            for (int i = k; i < n; i++) {
                window_sum += (arr[i] - arr[i - k]);
                sum += window_sum;
            }
            k += 2;
        }
        return sum;
    }
};