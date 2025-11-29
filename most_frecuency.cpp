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
        {
            // if (num.second >= 2){
                // answer += num.second;
                v.push_back(num.second);
            // }
        }
    }

    // cout << "Answer is " << answer <<endl;

    int mx = *max_element(v.begin(), v.end());
    int ctr = count(v.begin(), v.end(), mx); //v should be instead of nums

    cout << "Max element is " << mx << endl;
    cout << "Max element counted " <<ctr << endl;
    cout << "Frequency is " << mx * ctr << endl;

    // for (int i = 0; i < a.size(); i++)
    // {
    //     if(a[i] == a[i+1])count++;
    //     else {
    //         cout << a.size();
    //         return 0;
    //     }
    // }
    // for (size_t i = 0; i < a.size(); i++)
    // {
    //     if (a[i] != a[i + 1])
    //         b.push_back(a[i]);
    // }
    // for(int i = 0; i < a.size(); i++) {
    //     counter = count(a.begin(), a.end(), a[i]);
    //     cout << a[i] << " is counted " <<counter << " times" << endl;
    //     if(counter >= 2)
    //     {
    //         counter2 += counter;
    //     }
    // }
    // cout << counter2 << "\n";
    // for (size_t i = 0; i < a.size(); i++)
    // {
    //     if(a[i] == a[i + 1]) counter += 2;
    // }
    // cout << counter;
    // for (int i : b)
    //     cout << i << " ";

    // for (int i : v) cout << i <<" ";
    return 0;
}
*/

/*

10,12,11,9,6,19,11
a[i] != a[i+1]

*/

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int>v;
        unordered_map<int, int> ct;
        for (int i : nums)
            ct[i]++;
        int answer = 0;
        bool all_unique = true;

        for (auto p : ct) {
            if (p.second > 1) {
                all_unique = false;
                break;
            }
        }
        if (all_unique)
            return nums.size();
        else {
            for (auto num : ct) {
                v.push_back(num.second);
            }
        }

        int mx = *max_element(v.begin(), v.end());
        int ctr = count(v.begin(), v.end(), mx);

        return mx * ctr;
    }
};