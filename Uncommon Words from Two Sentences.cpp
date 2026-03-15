// problem link : https://leetcode.com/problems/uncommon-words-from-two-sentences/description/

/**
#include <bits/stdc++.h>
using namespace std;

vector<string> common_element(vector<string>&v1, vector<string>&v2){
    unordered_set<string>ust(v1.begin(), v1.end());
    unordered_set<string>ust2(v2.begin(), v2.end());
    vector<string>ans;
    for(auto i : v2)
        if(ust.find(i) == ust.end())
            ans.push_back(i);
    
    for(auto i : v1)
        if(ust2.find(i) == ust2.end())
            ans.push_back(i);
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s1 = "apple apple", word;
    string s2 = "banana", word2;

    vector<string>words;
    vector<string>words2, ans;

    stringstream ss1(s1);
    stringstream ss2(s2);

    while (ss1 >> word) words.push_back(word);

    while (ss2 >> word2) words2.push_back(word2);

    for(auto i : words)
        if(find(words2.begin(), words2.end(), i) == words2.end() && count(words.begin(), words.end(), i) == 1)
            ans.push_back(i);

    for(auto i : words2)
        if(find(words.begin(), words.end(), i) == words.end() && count(words2.begin(), words2.end(), i) == 1)
            ans.push_back(i);



    // cout << endl;

    // for(auto i : words2) cout << i << " ";
    
    // vector<string>res = common_element(words, words2);
    for(auto i : ans) cout << i << " ";

    return 0;
}


*/



class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        string word;
        string word2;

        vector<string> words;
        vector<string> words2, ans;

        stringstream ss1(s1);
        stringstream ss2(s2);

        while (ss1 >> word)
            words.push_back(word);

        while (ss2 >> word2)
            words2.push_back(word2);

        for (auto i : words)
            if (find(words2.begin(), words2.end(), i) == words2.end() &&
                count(words.begin(), words.end(), i) == 1)
                ans.push_back(i);

        for (auto i : words2)
            if (find(words.begin(), words.end(), i) == words.end() &&
                count(words2.begin(), words2.end(), i) == 1)
                ans.push_back(i);
        return ans;
    }
};