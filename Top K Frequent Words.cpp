/**
 * problem link : https://leetcode.com/problems/top-k-frequent-words/

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

    int k = 4;

    vector<string> words = {"the", "day", "is", "sunny", "the", "the", "the", "sunny", "is", "is"};
    map<string, int> ump;
    for (auto &i : words)
        ump[i]++;
    // priority_queue<int>pq2;
    priority_queue<pair<int, string>> pq2; // max heap by int
    for (auto &i : ump)
    {
        pq2.push({i.second, i.first});
    }
    vector<string> ans;
    vector<pair<int, string>> v;
    while (!pq2.empty())
    {
        auto x = pq2.top();
        pq2.pop();
        v.push_back(x);
    }

    sort(v.begin(), v.end(), [](const auto &a, const auto &b)
         {
             if (a.first == b.first)
                 return a.second < b.second; // ascending first
             return a.first > b.first;       // descending first
         });

    for (int i = 0; i < k; i++)
        ans.push_back(v[i].second);
    
    for(auto c : ans) cout << c << " ";
    return 0;
}

*/



class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> ump;
        for (auto& i : words)
            ump[i]++;
        // priority_queue<int>pq2;
        priority_queue<pair<int, string>> pq2; // max heap by int
        for (auto& i : ump) {
            pq2.push({i.second, i.first});
        }
        vector<string>ans;
        vector<pair<int, string>>v;
        while (!pq2.empty()) {
            auto x = pq2.top();
            pq2.pop();
            v.push_back(x);
        }

        sort(v.begin(), v.end(), [](const auto&a, const auto&b) {
            if (a.first == b.first)
                return a.second < b.second; // ascending first
            return a.first > b.first;       // descending first
        });

        for (int i = 0; i < k; i++)
            ans.push_back(v[i].second);
        return ans;
    }
};