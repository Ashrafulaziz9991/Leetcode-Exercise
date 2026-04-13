/**
 *
 * this one tyoes of permutation & combination problem
 * here will be bitwise operation happened
 * problem link :
 *
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> nums = {1, 2, 3};
    int sz = nums.size();
    vector<vector<int>> subset;

    for (int i = 0; i < (1 << sz); i++)
    {
        vector<int> temp;
        for (int j = 0; j < sz; j++)
            if (i & (1 << j))
                temp.push_back(nums[j]);
        subset.push_back(temp);
    }

    for (auto i : subset)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}