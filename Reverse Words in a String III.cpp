// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     string s, word, str2;
//     getline(cin, s);

//     stringstream ss(s);
//     vector<string>v;
//     while (ss >> word) v.push_back(word);
        
//     for(int i = 0; i < v.size(); i++) reverse(v[i].begin(), v[i].end());

//     for (size_t i = 0; i < v.size(); i++)
//     {
//         if(i > 0) str2 += " ";
//         str2 += v[i];
//     }
//     cout << str2;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <string>

// int main() {
//     std::vector<std::string> vec = {"apple", "banana", "cherry"};
//     std::string str;

//     for (size_t i = 0; i < vec.size(); ++i) {
//         if (i > 0) str += " ";  // separate by space
//         str += vec[i];
//     }

//     std::cout << str; // Output: apple banana cherry
// }


// problem link : https://leetcode.com/problems/reverse-words-in-a-string-iii/?envType=problem-list-v2&envId=string

class Solution {
public:
    string reverseWords(string s) {
        string word, str2;
        stringstream ss(s);
        vector<string> v;
        while (ss >> word)
            v.push_back(word);

        for (int i = 0; i < v.size(); i++)
            reverse(v[i].begin(), v[i].end());

        for (size_t i = 0; i < v.size(); i++) {
            if (i > 0)
                str2 += " ";
            str2 += v[i];
        }
        return str2;
    }
};