// problem link : https://leetcode.com/problems/multiply-strings/description/?envType=problem-list-v2&envId=math

/*
#include <bits/stdc++.h>
using namespace std;

// method 3: works at any  at the final case
string multiply(string num1, string num2) {
    int n1 = num1.size(), n2 = num2.size();
    vector<int> pos(n1 + n2, 0);

    for (int i = n1 - 1; i >= 0; i--) {
        for (int j = n2 - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + pos[i + j + 1];
            pos[i + j + 1] = sum % 10;
            pos[i + j] += sum / 10;
        }
    }

    string res;
    for (int p : pos) if (!(res.empty() && p == 0)) res += to_string(p);
    return res.empty() ? "0" : res;
}

// method 2 : works good as well which is combind with string

__int128 stringToInt128(const string& s) {
    // int part
    __int128 num = 0;
    for (char c : s) {
        num = num * 10 + (c - '0');
    }
    return num;
}

string int128ToString(__int128 num) {
    // string part
    if (num == 0) return "0";
    string str = "";
    while (num > 0) {
        str = char('0' + num % 10) + str;
        num /= 10;
    }
    return str;
}   



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string num1 =  "44", num2 = "75", result;
    
    // method 1 :
    // int n1 = 0, n2 = 0;
    //  stringstream ss(num1);
    //  stringstream SS(num2);

    // ss >> n1;
    // SS >> n2;

    // cout << n1 << endl;
    // cout << n2 << endl;

    // stringstream S;
    // S << n1 + n2;
    // result = S.str();

    // cout << result << endl;

    // Method 3 : works at any case finally
    string a = "401716832807512840963";
    string b = "167141802233061013023557397451289113296441069";
    cout << "Result: " << multiply(a, b) << endl; 
    return 0;
}

*/

class Solution {
public:
    string multiply(string num1, string num2) {
        int n1 = num1.size(), n2 = num2.size();
        vector<int> pos(n1 + n2, 0);

        for (int i = n1 - 1; i >= 0; i--) {
            for (int j = n2 - 1; j >= 0; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = mul + pos[i + j + 1];
                pos[i + j + 1] = sum % 10;
                pos[i + j] += sum / 10;
            }
        }

        string res;
        for (int p : pos)
            if (!(res.empty() && p == 0))
                res += to_string(p);
        return res.empty() ? "0" : res;
    }
};