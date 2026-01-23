// problem2160 & link : https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/description/?envType=problem-list-v2&envId=greedy

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int num;
    cin >> num;
    // string digit = to_string(num);
    // string digit_1;
    // string digit_2;

    vector<int>v;

    while (num > 0)
    {
        int temp = num % 10;
        v.push_back(temp);
        num /= 10;
    }

    int counter = 0;

    while (next_permutation(v.begin(), v.end()))
    {
        for(int i : v) cout << i << " ";
        counter++;
        cout << endl;
    }
    cout << counter << endl;
    

    return 0;
}