// problem link : https://leetcode.com/problems/sort-the-people/description/

/**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>heights = {180,165,170};
    vector<string>names = {"Mary","John","Emma"}, result;

    priority_queue<pair<int, string>>person;

    for (int i = 0; i < names.size(); i++)
        person.push({heights[i], names[i]});

    while (!person.empty())
    {
        auto[height, name] = person.top();
        person.pop();
        result.push_back(name);
    }
    
    for(auto i : result) cout << i << " ";
    return 0;
}


 * 
 * 
 * 2. Map with Name as Key
cpp

Copy
std::map<std::string, int> heightMap;
for (int i = 0; i < names.size(); i++) {
    heightMap[names[i]] = heights[i];
}
// Access: heightMap["Mary"] → 180


3. Vector of Pairs
cpp

Copy
std::vector<std::pair<std::string, int>> arr;
for (int i = 0; i < names.size(); i++) {
    arr.push_back({names[i], heights[i]});
}
 * 
 */



class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string>result;
        priority_queue<pair<int, string>> person;

        for (int i = 0; i < names.size(); i++)
            person.push({heights[i], names[i]});

        while (!person.empty()) {
            auto [height, name] = person.top();
            person.pop();
            result.push_back(name);
        }
        return result;
    }
};