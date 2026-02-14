// problem link : https://leetcode.com/problems/group-anagrams/description/

/**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    map<string, vector<string>> groups;

    // Group anagrams
    for (const auto &word : strs)
    {
        string sorted = word;
        sort(sorted.begin(), sorted.end());
        groups[sorted].push_back(word);
    }

    // Convert map to vector
    vector<vector<string>> result;
    for (const auto &pair : groups)
    {
        result.push_back(pair.second);
    }

    for(auto i : result){
        for(auto j : i)
            cout << j << " ";
        cout << endl;
    }

    return 0;
}

*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> groups;

        // Group anagrams
        for (const auto &word : strs)
        {
            string sorted = word;
            sort(sorted.begin(), sorted.end());
            groups[sorted].push_back(word);
        }

        // Convert map to vector
        vector<vector<string>> result;
        for (const auto &i : groups)
        {
            result.push_back(i.second);
        }
        return result;
    }
};