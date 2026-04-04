/**
 * problem link : https://leetcode.com/problems/maximum-average-subarray-i/
 * 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>nums = {1,12,-5,-6,50,3};
    int k = 4;

    int sum = 0;

    for (int i = 0; i < k; i++)
        sum += nums[i];
    
    int mx_sum = sum;

    for (int i = k; i < nums.size(); i++)
    {
        sum += nums[i] - nums[i - k];
        mx_sum = max(mx_sum, sum);
    }
    double x = k;
    double res = mx_sum / x;
    
    cout << fixed << setprecision(5) << mx_sum / x;
    
    return 0;
}

*/



class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;

        for (int i = 0; i < k; i++)
            sum += nums[i];

        int mx_sum = sum;

        for (int i = k; i < nums.size(); i++) {
            sum += nums[i] - nums[i - k];
            mx_sum = max(mx_sum, sum);
        }
        double x = k;
        double res = mx_sum / x;

        return res;
    }
};