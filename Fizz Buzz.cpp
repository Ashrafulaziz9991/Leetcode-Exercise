// problem link : https://leetcode.com/problems/fizz-buzz/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<string>numset;
    string wrd = "Fizz", wrd2 = "Buzz", wrd3 = "FizzBuzz";

    for (int i = 1; i <= n; i++)
        numset.push_back(to_string(i));
    for (auto &i : numset)
    {
        int num = stoi(i);
        if(num % 3 == 0 && num % 5 == 0) i = wrd3;
        else if(num % 3 == 0) i = wrd;
        else if(num % 5 == 0) i = wrd2;
    }

    for(const auto &i : numset) cout << i << " ";
    return 0;
}