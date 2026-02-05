
/**
 * problem link : https://leetcode.com/problems/maximum-product-of-three-numbers/
 *
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>nums = {1,2,3,4};
    int sz = nums.size(), mx = INT_MIN;


    // O(n^3)

    // for (int i = 0; i < sz; i++)
    // {
    //     // int mul = 1;
    //     for (int j = i + 1; j < sz; j++)
    //     {
    //         for (int k = j + 1; k < sz; k++)
    //         {
    //             int ml = nums[i] * nums[j] * nums[k];
    //             mx = max(mx, ml);
    //         }
    //     }
    // }

    sort(nums.begin(), nums.end(), greater<int>());

    // cout << mx;
    // for(int i  : nums) cout << i << " ";
    int fs = nums[0];

    for (int i = 1; i < sz; i++)
    {
        for (int j = i + 1; j < sz; j++)
        {
            int ml = fs * nums[i] * nums[j];
            mx = max(mx, ml);
        }
    }
    cout << mx;
    return 0;
}

*/



// solution : 1 
// time complexity O(n^2) or O(nlogn + n^2)
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        if (nums.size() == 3) {
            return nums[0] * nums[1] * nums[2];
        }
        int sz = nums.size(), mx = INT_MIN;
        sort(nums.begin(), nums.end(), greater<int>());
        for (int i = 1; i < sz; i++) {
            for (int j = i + 1; j < sz; j++) {
                int ml = nums[0] * nums[i] * nums[j];
                mx = max(mx, ml);
            }
        }
        return mx;
    }
};


// solution : 2  
// time complexity O(n log n)

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int sz = nums.size();
        sort(nums.begin(), nums.end(), greater<int>());
        int part1 = nums[0] * nums[1] * nums[2];
        int part2 = nums[0] * nums[sz - 1] * nums[sz - 2];
        return max(part1, part2);
    }
};
