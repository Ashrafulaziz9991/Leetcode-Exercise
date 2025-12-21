/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    string num = "", num2;
    for(int i = 1; i <= n; i++){
        num += to_string(i);
        // num.push_back(i + '0');
    }
    int cnt = 0;
    if(k == 1){ 
        cout << num << endl;
        return 0;
    }
    while (next_permutation(num.begin(), num.end()))
    {
        cout << num << endl;
        cnt++;
        if(cnt + 1 == k){
            num2 = num;
        }
    }
    cout << "Here is out of them " <<endl;
    // cout << num <<endl;
    cout << num2 <<endl;
    return 0;
}

*/


// problem link : https://leetcode.com/problems/permutation-sequence/

class Solution {
public:
    string getPermutation(int n, int k) {
        string num = "", num2;
        for (int i = 1; i <= n; i++)
            num += to_string(i);
        int cnt = 0;
        if (k == 1)
            return num;

        while (next_permutation(num.begin(), num.end())) {
            cnt++;
            if (cnt + 1 == k) {
                num2 = num;
            }
        }
        return num2;
    }
};