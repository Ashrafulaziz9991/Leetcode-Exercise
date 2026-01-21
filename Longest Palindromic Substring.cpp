// problem link : https://leetcode.com/problems/longest-palindromic-substring/
#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string s, int left, int right)
{
    while (left < right)
    {
        if (s[left] != s[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

string longestPalindrome(string s)
{
    int n = s.size();

    for (int len = n; len >= 1; len--)
    {
        for (int i = 0; i + len - 1 < n; i++)
        {
            int j = i + len - 1;
            if (is_palindrome(s, i, j))
            {
                return s.substr(i, len);
            }
        }
    }
    return "";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string str, str2;
    cin >> str;
    str2 = longestPalindrome(str);
    // str2 = longestSubstringPalindrome(str);
    cout << str2;
    // cout << str.substr(0, str.size() - 1);
    return 0;
}

/*


bool is_palindrome(string str){
    string  s2 = str;
    reverse(str.begin(), str.end());
    if(s2 == str) return true;
    else return false;

}

string longestPalindrome(string s){
    if(s.empty()) return "";
    if(is_palindrome(s)) return s;
    string left_cut = longestPalindrome(s.substr(0, s.size() - 1));
    string right_cut = longestPalindrome(s.substr(1));

    if(left_cut.size() > right_cut.size()) return left_cut;
    else return right_cut;
}


bool validPalindrome(string &s, string &result)
{
    int left = 0, right = s.size() - 1;

    while (left < right)
    {
        if (s[left] != s[right])
        {
            // Try skipping left character OR right character
            return is_palindrome(s, left + 1, right) ||
                   is_palindrome(s, left, right - 1);
        }
        left++;
        right--;
    }
    result = s;
    return true; // Already a palindrome
}

// function to check if a substring 
// s[low..high] is a palindrome
function checkPal(s, low, high) {
    while (low < high) {
        if (s[low] !== s[high])
            return false;
        low++;
        high--;
    }
    return true;
}

// function to find the longest palindrome substring
function getLongestPal(s) {

    const n = s.length;

    // all substrings of length 1 are palindromes
    let maxLen = 1, start = 0;

    // nested loop to mark start and end index
    for (let i = 0; i < n; i++) {
        for (let j = i; j < n; j++) {

            // check if the current substring is 
            // a palindrome
            if (checkPal(s, i, j) && (j - i + 1) > maxLen) {
                start = i;
                maxLen = j - i + 1;
            }
        }
    }

    return s.substring(start, start + maxLen);
}

// Driver Code
const s = "forgeeksskeegfor";
console.log(getLongestPal(s));



bool validPalindrome(string s, string& result) {
    int left = 0, right = s.size() - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            // Try skipping left character OR right character
            return is_palindrome(s, left + 1, right, result) ||
                   is_palindrome(s, left, right - 1, result);
        }
        left++;
        right--;
    }
    result = s; // Already a palindrome
    return true;
}

// Modified helper function
bool is_palindrome(string s, int left, int right, string& result) {
    int l = left, r = right;
    
    while (l < r) {
        if (s[l] != s[r]) {
            return false;
        }
        l++;
        r--;
    }
    
    // Build result string based on which character was skipped
    result = s.substr(0, left) + s.substr(left, right - left + 1) + s.substr(right + 1);
    return true;
}


bool is_palindrome(const string& s, int left, int right) {
    while (left < right) {
        if (s[left++] != s[right--]) {
            return false;
        }
    }
    return true;
}

string validPalindrome(const string& s) {
    int left = 0, right = s.size() - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            // Try skipping left character
            if (is_palindrome(s, left + 1, right)) {
                return s.substr(0, left) + s.substr(left + 1);
            }
            // Try skipping right character
            if (is_palindrome(s, left, right - 1)) {
                return s.substr(0, right) + s.substr(right + 1);
            }
            // Can't form palindrome by removing one character
            return "";
        }
        left++;
        right--;
    }
    
    return s; // Already a palindrome
}


// string Sub_string_palindrome(string &s){
    
//     if(s.empty()) return "";
//     string s2 = s;
//     reverse(s.begin(), s.end());
//     if(s2 == s)
//         return s2;
//     else
//         s.pop_back();
//     return Sub_string_palindrome(s);
// }

// string Sub_string_palindrome(string s){
//     if(s.empty()) return "";        // base case

//     string rev = s;
//     reverse(rev.begin(), rev.end());

//     if(s == rev)
//         return s;                   // found palindrome

//     s.pop_back();                   // remove last character
//     return Sub_string_palindrome(s); // recurse
// }


// bool is_palindrome(string &s){
//     int start = 0, endd = s.size() - 1;
//     while (start < endd){
//         if(s[start] != s[endd])
//             return false;
//         start++, endd--;
//     }hj
//     return true;
// }
*/


class Solution {
public:
    bool is_palindrome(const string &s, int left, int right) {
        while (left < right) {
            if (s[left++] != s[right--]) {
                return false;
            }
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.size();

        for (int len = n; len >= 1; len--) {         
            for (int i = 0; i + len - 1 < n; i++) {   
                int j = i + len - 1;
                if (is_palindrome(s, i, j)) {
                    return s.substr(i, len);         
                }
            }
        }
        return "";
    }
};