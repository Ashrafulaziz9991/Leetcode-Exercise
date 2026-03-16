// problem link : https://leetcode.com/problems/most-common-word/description/


/**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // string paragraph = "Bob hit a ball, the hit BALL flew far after it was hit.";
    string paragraph = "a, a, a, a, b,b,b,c, c";
    vector<string> words, banned = {"a"};

    for (char &c : paragraph)
    {
        if (!isalpha(c))
            c = ' ';
        else
            c = tolower(c);
    }

    // cout << paragraph << endl;

    stringstream ss(paragraph);
    string word;
    while (ss >> word)
        words.push_back(word);



    for(const string &c : banned)
        words.erase(remove(words.begin(), words.end(), c), words.end());

    // for(auto i : words) cout << i <<" ";
    

   
    unordered_map<string, int>ump;
    for(auto &wrd : words) ump[wrd]++;

    int mx = INT_MIN;
    string a;

    for(auto i : ump){
        if(i.second > mx){
            mx = i.second;
            a = i.first;
        }
    }

    cout << mx << endl;
    cout << a << endl;

    // priority_queue<pair<int, string>>pq;
    // for(auto &i : ump){
    //     pq.push({i.second, i.first});
    // }
    // while (!pq.empty())
    // {
    //     auto[num, wrd] = pq.top();
    //     pq.pop();
    //     cout << num << " " << wrd<<endl;
    // }

    // string ans = pq.top().second;

    // cout << ans;
    
    return 0;
}
*/

// sol - 1 : time complexity O(n * m + n log n)
class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        vector<string> words;

        for (char& c : paragraph) {
            if (!isalpha(c))
                c = ' ';
            else
                c = tolower(c);
        }

        stringstream ss(paragraph);
        string word;
        while (ss >> word)
            words.push_back(word);

        // removing banned words from words vector
        for (const string& c : banned)
            words.erase(remove(words.begin(), words.end(), c), words.end());
        
        unordered_map<string, int> ump;
        for (auto& wrd : words)
            ump[wrd]++;

        priority_queue<pair<int, string>> pq;
        for (auto& i : ump)
            pq.push({i.second, i.first});

        return pq.top().second;
    }
};

// sol - 2: time complexity o(n * m)

class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        vector<string> words;

        for (char& c : paragraph) {
            if (!isalpha(c))
                c = ' ';
            else
                c = tolower(c);
        }

        stringstream ss(paragraph);
        string word;
        while (ss >> word)
            words.push_back(word);

        // removing banned words from words vector
        for (const string& c : banned)
            words.erase(remove(words.begin(), words.end(), c), words.end());

        unordered_map<string, int> ump;
        for (auto& wrd : words)
            ump[wrd]++;
        string a;
        int mx = 0;
        for (auto i : ump) {
            if (i.second > mx) {
                mx = i.second;
                a = i.first;
            }
        }
        return a;
    }
};




// solution - 3: time complexity O(n), most efficient

class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        vector<string> words;

        for (char& c : paragraph) {
            if (!isalpha(c))
                c = ' ';
            else
                c = tolower(c);
        }
        stringstream ss(paragraph);
        string word;
        while (ss >> word)
            words.push_back(word);

        unordered_set<string>bn(banned.begin(), banned.end());

        unordered_map<string, int> ump;
        for (auto& wrd : words)
            if(!bn.count(wrd)) // counting word exept banned words/charecters.ll., ki8
                ump[wrd]++;
        string a;
        int mx = 0;
        for (auto i : ump) {
            if (i.second > mx) {
                mx = i.second;
                a = i.first;
            }
        }
        return a;
    }
};