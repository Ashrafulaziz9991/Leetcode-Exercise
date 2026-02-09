// problem link : https://leetcode.com/problems/unique-number-of-occurrences/

/**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>nums = {-3,0,1,-3,1,1,1,-3,10,0};
    set<int>st, st2;
    unordered_map<int, int>mp;

    for(int &i : nums) st.insert(i);
    for(int &i : nums) mp[i]++;
    
    
    for(auto &i : mp){
        st2.insert(i.second);
    }

    for(auto &i : st) cout << i << " ";
    cout << endl;
    for(auto &i : st2) cout << i << " ";
    cout << st2.size() == st.size();

    // cout << st.size() << endl;
    // cout << st2.size() << endl;
    // cout << ok;
    return 0;
}

*/


class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set<int> st, st2;
        unordered_map<int, int> mp;

        for (int i : arr)
            st.insert(i);
        for (int i : arr)
            mp[i]++;

        for (auto& i : mp) {
            st2.insert(i.second);
        }
        return st2.size() == st.size();
    }
};