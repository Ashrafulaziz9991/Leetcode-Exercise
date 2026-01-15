

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    stringstream ss;
    ss << hex << n;
    string hexStr = ss.str();
    cout << hexStr <<endl;
    return 0;
}

*/

/*
#include <iostream>
#include <string>
std::string convert(int n, int base) {
    const char* digits = "0123456789ABCDEF";
    std::string result;
    while (n > 0) {
        result = digits[n % base] + result;
        n /= base;
    }
    return result.empty() ? "0" : result;
}
int main() {
    int n = 100;
    std::cout << "Binary: " << convert(n, 2) << "\n";  // 1100100
    std::cout << "Octal: " << convert(n, 8) << "\n";   // 144
    std::cout << "Hex: " << convert(n, 16) << "\n";    // 64
}   
*/


// problem link : https://leetcode.com/problems/convert-a-number-to-hexadecimal/

class Solution {
public:
    string toHex(int num) {
        stringstream ss;
        ss << hex << num;
        string hexStr = ss.str();
        return  hexStr;
    }
};