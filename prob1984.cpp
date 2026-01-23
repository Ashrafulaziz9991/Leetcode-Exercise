// problem link : https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores/description/

// this is sliding window teqnique through k pointers

/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <climits>
#include <cstring>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int k = 2;

    vector<int> nums = {9,4,1,7};
    sort(nums.begin(), nums.end());
    int mn = INT_MAX, j = 0;
    for (int i = k - 1; i < nums.size(); i++)
    {
        int diff = nums[i] - nums[j];
        // mn = min(mn, nums[i] - nums[j]);
        mn = min(mn, diff);
        j++;
    }
    cout << mn;
    return 0;
}
*/

class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(nums.size() <= 1) return 0;
        sort(nums.begin(), nums.end());
        int mn = INT_MAX, j = 0;
        for (int i = k - 1; i < nums.size(); i++) {
            int diff = nums[i] - nums[j];
            mn = min(mn, diff);
            j++;
        }
        return mn;
    }
};