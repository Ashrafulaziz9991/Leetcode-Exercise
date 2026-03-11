// problem link : https://leetcode.com/problems/find-the-most-common-response/description/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // vector<vector<string>> responses = {{"good", "ok", "good"}, {"ok", "bad"}, {"bad", "notsure"}, {"great", "good"}};
    vector<vector<string>> responses = {{"good", "ok", "good"}, {"ok", "bad"}, {"bad", "notsure"}, {"great", "good"}};
    unordered_map<string, int> freq;
    vector<pair<int, string>> temp;

    // vector<unordered_set<string>> res;
    // for (const auto &row : responses)
    // {
    //     unordered_set<string> s(row.begin(), row.end());
    //      for (const auto j : s)
    //         freq[j]++;
    // }

    // priority_queue<pair<int, string>> pq;

    // for (auto i : freq)
    // {
    //     // cout << i.first << " " << i.second << endl;
    //     pq.push({i.second, i.first});
    // }
    // while (!pq.empty())
    // {
    //     auto x = pq.top();
    //     pq.pop();
    //     temp.push_back(x);
    // }
    

    // sort(temp.begin(), temp.end(), [](const auto &a, const auto &b)
    // {
    //     if (a.first == b.first)
    //         return a.second < b.second; // ascending first
    //     return a.first > b.first;       // descending first
    // });

    // // for(auto i : temp) cout << i.first << " " << i.second << endl;
    // cout <<  temp[0].second;

    // unordered_map<string, int> freq;

    for (const auto &row : responses)
    {
        unordered_set<string> s(row.begin(), row.end());
        for (const auto &word : s)
            freq[word]++;
    }

    string ans;
    int best = -1;

    for (const auto &[word, count] : freq)
    {

        if (count > best || (count == best && word < ans))
        {
            best = count;
            ans = word;
        }
    }

    cout << ans; 

    return 0;
}




class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        unordered_map<string, int> freq;
        vector<pair<int, string>> temp;

        for (const auto& row : responses) {
            unordered_set<string> s(row.begin(), row.end());
            for (const auto j : s)
                freq[j]++;
        }

        string ans;
        int best = -1;

        for (const auto& [word, count] : freq) {

            if (count > best || (count == best && word < ans)) {
                best = count;
                ans = word;
            }
        }

        return ans;
    }
};