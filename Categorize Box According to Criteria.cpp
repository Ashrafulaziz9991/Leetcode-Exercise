// problem link : https://leetcode.com/problems/categorize-box-according-to-criteria/

#include <bits/stdc++.h>
using namespace std;

string categorizeBox(int length, int width, int height, int mass)
{
    string A = "Bulky";
    string B = "Heavy";
    string C = "Neither";
    string D = "Both";
    if (mass >= 100)
        return B;
    if (length >= 1e4 || width >= 1e4 || height >= 1e4)
        return A;
    int volume = length * width * height;
    if (volume >= 1e9)
        return A;
    if (volume >= 1e9 && mass >= 100)
        return A;
    else
        return C;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    return 0;
}