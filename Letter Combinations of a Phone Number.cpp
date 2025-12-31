// problem link : https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/


/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // unordered_map<int, string>

    string digits, digits2 = "";
    cin >> digits;
    vector<string> words, ans;

    for (char c : digits)
    {
        if (c == '2'){
            digits2 += "abc";
            words.push_back("abc");
        }
        else if (c == '3')
        {
            digits2 += "def";
            words.push_back("def");
        }
        else if (c == '4')
        {
            digits2 += "ghi";
            words.push_back("ghi");
        }
        else if (c == '5')
        {
            digits2 += "jkl";
            words.push_back("jkl");
        }
        else if (c == '6')
        {
            digits2 += "mno";
            words.push_back("mno");
        }
        else if (c == '7')
        {
            digits2 += "pqrs";
            words.push_back("pqrs");
        }
        else if (c == '8')
        {
            digits2 += "tuv";
            words.push_back("tuv");
        }
        else if (c == '9')
        {
            digits2 += "wxyz";
            words.push_back("wxyz");
        }
    }

    cout << digits2 << endl;

    for(auto i : words) cout << i << " ";
    cout << endl;
    int n = words.size();



    cout << n << endl;

    if(n == 1){
        string s = words[0];
        for(char &c : s){
            string add = "";
            add +=c;
            ans.push_back(add);
        }
    }
    else if (n == 2)
    {
        string s = words[0];
        string s2 = words[1];
        for (char &c : s)
        {
            for (char &d : s2)
            {
                string add = "";
                add += c;
                add += d;
                ans.push_back(add);
            }
        }
    }

    else if (n == 3)
    {
        string s = words[0];
        string s2 = words[1];
        string s3 = words[2];
        for (char &a : s)
        {
            for (char &b : s2)
            {
                for (char &c : s3)
                {
                    string add = "";
                    add += a;
                    add += b;
                    add += c;
                    ans.push_back(add);
                }
            }
        }
    }
    if(n == 4){
        string s = words[0];
        string s2 = words[1];
        string s3 = words[2];
        string s4 = words[3];

        for(char &a : s){
            for(char &b : s2){
                for(char &c : s3){
                    for(char &d : s4){
                        string add = "";
                        add += a;
                        add += b;
                        add += c;
                        add += d;

                        ans.push_back(add);
                    }
                }
            }
        }
    }

    for(auto t : ans) cout << t << " ";
    return 0;
}

*/

// #include <iodigitseam>
// #include <algorithm>
// #include <string>

// int main() {
//     std::string digits = "abcdef";

//     // Print the first permutation (initially sorted)
//     std::cout << digits << std::endl;

//     // Generate and print the next two permutations
//     for (int i = 0; i < 2; ++i) {
//         if (std::next_permutation(digits.begin(), digits.end())) {
//             std::cout << digits << std::endl;
//         }
//     }

//     return 0;
// }


class Solution {
public:
    vector<string> letterCombinations(string digits) {
        string digits2 = "";
        vector<string> words, ans;

        for (char c : digits) {
            if (c == '2') {
                digits2 += "abc";
                words.push_back("abc");
            } else if (c == '3') {
                digits2 += "def";
                words.push_back("def");
            } else if (c == '4') {
                digits2 += "ghi";
                words.push_back("ghi");
            } else if (c == '5') {
                digits2 += "jkl";
                words.push_back("jkl");
            } else if (c == '6') {
                digits2 += "mno";
                words.push_back("mno");
            } else if (c == '7') {
                digits2 += "pqrs";
                words.push_back("pqrs");
            } else if (c == '8') {
                digits2 += "tuv";
                words.push_back("tuv");
            } else if (c == '9') {
                digits2 += "wxyz";
                words.push_back("wxyz");
            }
        }

        int n = words.size();

        if (n == 1) {
            string s = words[0];
            for (char& c : s) {
                string add = "";
                add += c;
                ans.push_back(add);
            }
        } else if (n == 2) {
            string s = words[0];
            string s2 = words[1];
            for (char& c : s) {
                for (char& d : s2) {
                    string add = "";
                    add += c;
                    add += d;
                    ans.push_back(add);
                }
            }
        }

        else if (n == 3) {
            string s = words[0];
            string s2 = words[1];
            string s3 = words[2];
            for (char& a : s) {
                for (char& b : s2) {
                    for (char& c : s3) {
                        string add = "";
                        add += a;
                        add += b;
                        add += c;
                        ans.push_back(add);
                    }
                }
            }
        }
        if (n == 4) {
            string s = words[0];
            string s2 = words[1];
            string s3 = words[2];
            string s4 = words[3];

            for (char& a : s) {
                for (char& b : s2) {
                    for (char& c : s3) {
                        for (char& d : s4) {
                            string add = "";
                            add += a;
                            add += b;
                            add += c;
                            add += d;

                            ans.push_back(add);
                        }
                    }
                }
            }
        }
        return ans;
    }
};