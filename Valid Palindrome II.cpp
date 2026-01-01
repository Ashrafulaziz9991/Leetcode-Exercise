/**
 * checking wheather a string is a palindrome or not
 * Even though removing 1 charecter
 * One kind of new idea
 */


/*
#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string s){
    string s2 = s;
    reverse(s.begin(), s.end());
    return s == s2;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string str = "abca";
    

    bool flag = false;

    if(is_palindrome(str)){
        cout << "YES" << endl;
        return 0;
    }
   
    for (int i = 0; i < str.size(); i++)
    {
        string temp = str;
        temp.erase(i, 1); // Remove character at position i only
        cout << temp << endl;

        if (is_palindrome(temp))
        {
            flag = true;
            break;
        }
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

solution : 2

bool is_palindrome(string s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int left = 0, right = s.size() - 1;

        while (left < right) {
            if (s[left] != s[right]) {
                // Try skipping left character OR right character
                return is_palindrome(s, left + 1, right) ||
                       is_palindrome(s, left, right - 1);
            }
            left++;
            right--;
        }
        return true; // Already a palindrome

*/

// problem link : https://leetcode.com/problems/valid-palindrome-ii/

class Solution {
public:
    bool is_palindrome(string s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int left = 0, right = s.size() - 1;

        while (left < right) {
            if (s[left] != s[right]) {
                // Try skipping left character OR right character
                return is_palindrome(s, left + 1, right) ||
                       is_palindrome(s, left, right - 1);
            }
            left++;
            right--;
        }
        return true; // Already a palindrome
    }
};

/*
bool validPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
*/