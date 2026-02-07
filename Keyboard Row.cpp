/**
 * 
 * problem link : 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<string> words = {"Hello","Alaska","Dad","Peace"}, ans;
    string s1 = "qwertyuiopQWERTYUIOP", s2 = "asdfghjklASDFGHJKL", s3 = "zxcvbnmZXCVBNM";

    // for(auto &word : words){
    //     for(char &c : word){
    //         char x = tolower(c);
    //         c = x;
    //     }
    // }

    for(auto &word : words){
        bool ok = true;
        for(char &c : word){
            if(find(s1.begin(), s1.end(), c) == s1.end()){
                ok = false;
                break;
            }
        }
        if(ok)
            ans.push_back(word);
    }

    for(auto &word : words){
        bool ok = true;
        for(char &c : word){
            if(find(s2.begin(), s2.end(), c) == s2.end()){
                ok = false;
                break;
            }
        }
        if(ok)
            ans.push_back(word);
    }

    for(auto &word : words){
        bool ok = true;
        for(char &c : word){
            if(find(s3.begin(), s3.end(), c) == s3.end()){
                ok = false;
                break;
            }
        }
        if(ok)
            ans.push_back(word);
    }
    for(auto &word : ans) cout << word << " ";
    
    // string str = "Alaska";
    // for(char &c : str){
    //     char x = tolower(c);
    //     c = x;
    // }

    // bool ok = true;
    // for(char &c: str){        
    //     if(find(s2.begin(), s2.end(), c) == s2.end()){
    //         ok = false;
    //         break;
    //     }
    // }

    // if(ok) cout << "Exist";
    // else cout << "Not Exist";
    // // cout << str;
    return 0;
}

*/


class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        string s1 = "qwertyuiopQWERTYUIOP", s2 = "asdfghjklASDFGHJKL",
               s3 = "zxcvbnmZXCVBNM";

        for (auto& word : words) {
            bool ok = true;
            for (char& c : word) {
                if (find(s1.begin(), s1.end(), c) == s1.end()) {
                    ok = false;
                    break;
                }
            }
            if (ok)
                ans.push_back(word);
        }

        for (auto& word : words) {
            bool ok = true;
            for (char& c : word) {
                if (find(s2.begin(), s2.end(), c) == s2.end()) {
                    ok = false;
                    break;
                }
            }
            if (ok)
                ans.push_back(word);
        }

        for (auto& word : words) {
            bool ok = true;
            for (char& c : word) {
                if (find(s3.begin(), s3.end(), c) == s3.end()) {
                    ok = false;
                    break;
                }
            }
            if (ok)
                ans.push_back(word);
        }
        return ans;
    }
};