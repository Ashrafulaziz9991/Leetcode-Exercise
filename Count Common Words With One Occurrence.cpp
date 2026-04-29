// problem link : https://leetcode.com/problems/count-common-words-with-one-occurrence/description/

/**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<string> words1 = {"leetcode","is","amazing","as","is"};
    vector<string> words2 = {"amazing","leetcode","is"};
    int count = 0;
    unordered_map<string, int> freq, freq2;
    for(auto i : words1) freq[i]++;
    for(auto i : words2) freq2[i]++;

    for(auto i : freq){
        for(auto j : freq2){
            if(i.first == j.first && i.second == 1 && j.second == 1)
            count++;
        }
    }
    // vector<string> ans = common_element(words1, words2);

    // for(auto i : ans) cout << i << " ";

    cout << count;

    return 0;
}
*/


class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int count = 0;
        unordered_map<string, int> freq, freq2;
        for (auto i : words1)
            freq[i]++;
        for (auto i : words2)
            freq2[i]++;

        for (auto i : freq) {
            for (auto j : freq2) {
                if (i.first == j.first && i.second == 1 && j.second == 1)
                    count++;
            }
        }

        return count;
    }
};