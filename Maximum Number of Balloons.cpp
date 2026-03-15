/**
 * problem link : https://leetcode.com/problems/maximum-number-of-balloons/description/
 * 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s = "loonbalxballpoon";
    unordered_map<char, int>freq;

    int mn = INT_MAX;

    for(auto &c : s) freq[c]++;

   int balloons = min({freq['b'], freq['a'], freq['l']/2, freq['o']/2, freq['n']});

    cout << balloons;
    
    return 0;
}

*/


class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> freq;
        for (auto& c : text)
            freq[c]++;

        int balloons = min(
            {freq['b'], freq['a'], freq['l'] / 2, freq['o'] / 2, freq['n']});

        return balloons;
    }
};