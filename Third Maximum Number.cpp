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

    vector<int> nums;
    for (int i = 0; i < nums.size(); i++)
        cin >> nums[i];
    vector<int> v;

    set<int> st;
    for (int i : nums)
        st.insert(i);
    for (int i : st)
        v.push_back(i);

    if (v.size() == 1)
        cout << v[0];
    else if (v.size() == 2)
        cout << v[1];
    else
        cout << v[v.size() - 3];

    return 0;
}

*/

// problem link : https://leetcode.com/problems/third-maximum-number/


class Solution {
public:
    int thirdMax(vector<int>& nums) {
        vector<int>v;
        set<int>st;
        for(int i : nums) st.insert(i);
        for(int i : st) v.push_back(i);

        if(v.size() == 1) return v[0];
        if(v.size() == 2) return v[1];
        return v[v.size() - 3];
    }
};