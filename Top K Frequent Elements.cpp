//
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int k = 2;

    vector<int> nums = {1,1,1,2,2,3};
    unordered_map<int, int> ump;
    for(auto &i : nums) ump[i]++;
    priority_queue<pair<int, int>> pq2; // max heap by int
    for (auto &i : ump)
        pq2.push({i.second, i.first});
    vector<int>ans;
    vector<pair<int, int>>v;
    while (!pq2.empty())
    {
        auto x = pq2.top();
        pq2.pop();
        v.push_back(x);
    }
    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
            if (a.first == b.first)
                return a.second < b.second;
            return a.first > b.first;       // descending first
        });

    for(int i = 0; i <k; i++) ans.push_back(v[i].second);
    for(auto i : ans) cout << i << " ";
    
    return 0;
}

*/




class Solution {
public:
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> ump;
        for (auto& i : nums)
            ump[i]++;
        priority_queue<pair<int, int>> pq2;
        for (auto& i : ump)
            pq2.push({i.second, i.first});
        vector<int> ans;
        vector<pair<int, int>> v;
        while (!pq2.empty()) {
            auto x = pq2.top();
            pq2.pop();
            v.push_back(x);
        }

        // lambda function
        sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
            if (a.first == b.first)
                return a.second < b.second; // ascending first
            return a.first > b.first;       // descending first
        });

        for (int i = 0; i < k; i++)
            ans.push_back(v[i].second);
        return ans;
    }
};