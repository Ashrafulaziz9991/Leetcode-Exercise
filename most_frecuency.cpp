// problem link https://leetcode.com/problems/count-elements-with-maximum-frequency/?envType=daily-question&envId=2025-09-22

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>nums  = {1,2,3,4,5}, v;
    unordered_map<int, int> ct;
    for (int i : nums)
        ct[i]++;
    int answer = 0;
    bool all_unique = true;

    for (auto p : ct)
    {
        if (p.second > 1)
        {
            all_unique = false;
            break;
        }
    }
    if (all_unique){
        cout << nums.size();
        return 0;
    }
    else
    {
        for (auto num : ct)
                v.push_back(num.second);
    }

    // cout << "Answer is " << answer <<endl;

    int mx = *max_element(v.begin(), v.end());
    int ctr = count(v.begin(), v.end(), mx); //v should be instead of nums

    cout << "Max element is " << mx << endl;
    cout << "Max element counted " <<ctr << endl;
    cout << "Frequency is " << mx * ctr << endl;
}
*/

/*

10,12,11,9,6,19,11
a[i] != a[i+1]

*/

class Solution
{
public:
    int maxFrequencyElements(vector<int> &nums)
    {
        vector<int> v;
        unordered_map<int, int> ct;
        for (int i : nums)
            ct[i]++;
        int answer = 0;
        bool all_unique = true;

        for (auto p : ct)
        {
            if (p.second > 1)
            {
                all_unique = false;
                break;
            }
        }
        if (all_unique)
            return nums.size();
        else
        {
            for (auto num : ct)
            {
                v.push_back(num.second);
            }
        }

        int mx = *max_element(v.begin(), v.end());
        int ctr = count(v.begin(), v.end(), mx);

        return mx * ctr;
    }
};