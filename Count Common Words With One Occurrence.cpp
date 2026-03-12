// problem link : https://leetcode.com/problems/count-common-words-with-one-occurrence/description/

#include <bits/stdc++.h>
using namespace std;

// vector<string> common_element(vector<string>&v1, vector<string>&v2){
//     unordered_set<string>ust(v2.begin(), v2.end()), temp2;
//     vector<string>ans;
//     for(const auto &i : v1){
        
//         if(ust.find(i) != ust.end() && count.begi)
//             temp2.insert(i);
//     }
//     ans.assign(temp2.begin(), temp2.end());
//     return ans;
// }


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