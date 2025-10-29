// problem link : https://leetcode.com/problems/missing-number/description/?envType=problem-list-v2&envId=sorting

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>nums = {8, 6, 2, 4, 0, 3, 1, 5};

    // int mx = *max_element(nums.begin(), nums.end());
    // int mn = *min_element(nums.begin(), nums.end());

    sort(nums.begin(), nums.end());

    // cout << mx <<endl;
    // cout << mn <<endl;
    // cout << nums[0] <<endl;
    // cout << nums[nums.size() - 1] <<endl;

    if(nums[0] == 0 && nums[0] == 1)
        cout << 2 << endl;
    else
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (i != nums[i])
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}