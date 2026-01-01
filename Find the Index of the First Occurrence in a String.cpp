/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string haystack = "sadbutsad", needle = "sad";
    // string haystack;
    // cin >> haystack;
    // string needle;
    // cin >> needle;

    // cout << haystack << endl;
    // cout << needle << endl;

    // bool flag = false; 


    // for(char &c : haystack){
    //     for(char &d : needle){
    //         string add = "";
    //         if(c == d)
    //         {
    //             add += c;
    //         }
    //         if(add == needle){
    //             flag = true;
    //             break;
    //         }
    //         if(c != d)
    //             add.clear();
    //     }
    // }

    // if(flag) cout<< "yes" << endl;
    // else cout<< "NO" << endl;

    size_t idx = haystack.find(needle);



    if(idx != string :: npos)
        cout << idx << endl;
    else cout << "NOt found";
    return 0;
}

*/
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string text = "geeksforgeeks";
//     string pattern = "eks";
//     size_t index = text.find(pattern);
//     if (index != string::npos) {
//         cout << "Substring found at index " << index;
//     } else {
//         cout << "Substring not found";
//     }
//     return 0;
// }   

/**
 * checking wheather a string is substring or not
 * & returnig their index
 * 
 * problem link : https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/?envType=problem-list-v2&envId=string
 */

class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t idx = haystack.find(needle);

        if (idx != string ::npos)
            return idx;
        else
            return -1;
    }
};