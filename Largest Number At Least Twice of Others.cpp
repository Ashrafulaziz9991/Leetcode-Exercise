// problem link : https://leetcode.com/problems/largest-number-at-least-twice-of-others/


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

    vector<int> nums = {1, 2, 3, 4}, nums2;
    nums2 = nums;
    sort(nums.begin(), nums.end(), greater<int>());
    int big = nums[0], scd_big = nums[1], index;

    for (int i = 0; i < nums.size(); i++)
    {
        if (scd_big == 0 && big == nums2[i])
        {
            index = i;
            break;
        }
        if (big >= scd_big * 2 && big == nums2[i])
        {
            index = i;
        }
        else
            index = -1;
    }
    cout << index << endl;
    return 0;
}

*/


class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> nums2;
        nums2 = nums;
        sort(nums.begin(), nums.end(), greater<int>());
        int big = nums[0], scd_big = nums[1], index;
        for (int i = 0; i < nums.size(); i++) {
            if(scd_big == 0 && big == nums2[i]){
                return i;
            }
            if (big >= scd_big * 2 && big == nums2[i]) {
                return i;
            }
        }
        return -1;
    }
};