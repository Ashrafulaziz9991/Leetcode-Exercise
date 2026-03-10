// problem link : https://leetcode.com/problems/string-compression/description/


/**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // vector<char>chars = {'a','b','b','b','b','b','b','b','b','b','b','b','b'};
    vector<char>chars = {'a','a','b','b','c','c','c'};
    // vector<char>chars = {'a'};
    unordered_map<char,int>freq;
    vector<string>ans;
    int originalSize = chars.size();
    for(char &c : chars) freq[c]++;
    string temp = "";
    for(auto i : freq){
        string x = "";
        x.push_back(i.first);
        if(i.second > 1){
            x += to_string(i.second);
        }
        ans.push_back(x);
    }
    // sort(ans.begin(), ans.end());
    // for(auto i : ans){
    //     temp += i;
    // }

    // // cout << temp << endl;
    // ans.clear();
    // for(char &c : temp){
    //     string t = "";
    //     t.push_back(c);
    //     ans.push_back(t);
    // }
    // chars.clear();
    // chars.assign(ans.begin(), ans.end());

    // for(auto i : chars) cout << i <<" ";
    // for(auto i : ans){
    //     // temp2.push_back(i);
    //     // temp.push_back(to_string(i));
    //     // cout << i;
    //     string s = to_string(i);
    //     temp += s;
    // }
    // cout << temp << endl;
    for (int i = 0; i < originalSize; ) {
        char c = chars[i];
        int count = 0;
        while (i < originalSize && chars[i] == c) {
            count++;
            i++;
        }
        temp += c;
        if (count > 1) temp += to_string(count);
    }

    // Now write back to chars
    for (int i = 0; i < temp.size(); i++) {
        chars[i] = temp[i];
    }

    return temp.size();
    return 0;

}

*/

// solution : 1
int compress(vector<char>& chars) {
    unordered_map<char, int> freq;
    vector<string> ans;
    int originalSize = chars.size();

    // Count frequencies (but we lose order — we'll fix that later)
    for (char& c : chars)
        freq[c]++;

    // Build compressed strings
    for (auto i : freq) {
        string x = "";
        x.push_back(i.first);
        if (i.second > 1) {
            x += to_string(i.second);
        }
        ans.push_back(x);
    }

    string temp = "";
    for (int i = 0; i < originalSize; ) {
        char c = chars[i];
        int count = 0;
        while (i < originalSize && chars[i] == c) {
            count++;
            i++;
        }
        temp += c;
        if (count > 1) temp += to_string(count);
    }

    // Now write back to chars
    for (int i = 0; i < temp.size(); i++) {
        chars[i] = temp[i];
    }

    return temp.size();
}


// solution : 2

int compress(vector<char>& chars) {
    int i = 0, idx = 0;
    int n = chars.size();

    while (i < n) {
        char cur = chars[i];
        int count = 0;

        // Count consecutive occurrences
        while (i < n && chars[i] == cur) {
            i++;
            count++;
        }

        chars[idx++] = cur;

        // Write count if > 1
        if (count > 1) {
            string cnt = to_string(count);
            for (char c : cnt)
                chars[idx++] = c;
        }
    }

    return idx;
}