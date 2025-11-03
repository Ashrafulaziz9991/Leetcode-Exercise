// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     //     ios_base::sync_with_stdio(0);
//     //     cin.tie(0);
//     // vector<char> chars = {"h","e","l","l","o"};
//     vector<char>chars;

//     chars.push_back('h');
//     chars.push_back('e');
//     chars.push_back('l');
//     chars.push_back('l');
//     chars.push_back('o');

//     int start = 0, endd = chars.size() - 1;
//     while(start < endd){
//         char temp = chars[start];
//         chars[start] = chars[endd];
//         chars[endd] = temp;
//         start++, endd--;
//     }

//     for(char c : chars)
//         cout << c <<" ";
//     return 0;
// }

// problem link : https://leetcode.com/problems/reverse-string/?envType=problem-list-v2&envId=string

class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0, endd = s.size() - 1;
        while(start < endd){
            char temp = s[start];
            s[start] = s[endd];
            s[endd] = temp;
            start++, endd--;
        }
    }
};