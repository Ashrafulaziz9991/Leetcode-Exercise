/**
 * problem link : https://leetcode.com/problems/word-pattern/description/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string pattern = "abba";
    string s = "dog cat cat dog", word;

    unordered_map<char, set<string>> mapping;

    vector<string>words;
    stringstream ss(s);

    while(ss >> word) words.push_back(word);

    if (pattern.size() != words.size())
            return false;
    
    for (int i = 0; i < pattern.size(); i++){
        char x = pattern[i];
        mapping[x].insert(words[i]);
    }

    // for(auto [k, values] : mapping){
    //     cout << k << " ";
    //     for(auto j : values){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    for (auto [k, values] : mapping)
        if (values.size() > 1){
            cout << "NO";
            return 0;
        }
    unordered_set<char> uniqPattern(pattern.begin(), pattern.end());
    unordered_set<string> uniqWords(words.begin(), words.end());

    if (uniqPattern.size() != uniqWords.size()){
        cout << "NO";
        return 0;
    }

    cout << "YES";

    return 0;
}

*/




class Solution {
public:
    bool wordPattern(string pattern, string s) {
        string word;
        unordered_map<char, set<string>> mapping;
        
        vector<string> words;
        stringstream ss(s);
        
        while (ss >> word)
            words.push_back(word);

        if (pattern.size() != words.size())
            return false;

        for (int i = 0; i < pattern.size(); i++) {
            char x = pattern[i];
            mapping[x].insert(words[i]);
        }
        for (auto [k, values] : mapping)
            if(values.size() > 1)
                return false;
        unordered_set<char> uniqPattern(pattern.begin(), pattern.end());
        unordered_set<string> uniqWords(words.begin(), words.end());

        if (uniqPattern.size() != uniqWords.size())
            return false;
        return true;    
    }
};