// problem link : https://leetcode.com/problems/find-common-characters/description/


/**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<string> words = {"bella","label","roller"}, result;
    map<char, int>common;
    for(char &c : words[0]) common[c]++;
    
    for (int i = 1; i < words.size(); i++)
    {
        map<char, int>ump;
        for(char &c : words[i]){
            ump[c]++;
        }

        for(auto i : common){
            char x = i.first;
            common[x] = min(ump[x], common[x]);
        }
    }

    for (auto [c, num] : common)
    {
        for (int i = 0; i < num; i++)
            result.push_back(string(1, c));
        // 
        //  * alternative ways
        //     Using initializer list (C++11)
        //     result.push_back({c});
        //     Using assignment
        //     string s;
        //     s += c;
        //     result.push_back(s);
        //  
    }

    for(auto c : result) cout << c << " ";
    return 0;
}

*/



class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        map<char, int> common;
        for (char& c : words[0])
            common[c]++;

        for (int i = 1; i < words.size(); i++) {
            map<char, int> ump;
            for (char& c : words[i]) {
                ump[c]++;
            }

            for (auto i : common) {
                char x = i.first;
                common[x] = min(ump[x], common[x]);
            }
        }
        vector<string> result;
        for (auto [c, num] : common) {
            for (int i = 0; i < num; i++)
                result.push_back(string(1, c));
        }
        return result;
    }
};