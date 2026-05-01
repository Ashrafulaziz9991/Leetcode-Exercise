#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<string> nums = {"09", "01", "10", "02"};
    int k = 3;

    auto cmp = [](const string &a, const string &b) {
        int i = 0;
        while (i < (int)a.size() && a[i] == '0') i++;
        int j = 0;
        while (j < (int)b.size() && b[j] == '0') j++;

        int lenA = max(1, (int)a.size() - i);
        int lenB = max(1, (int)b.size() - j);
        if (lenA != lenB) return lenA > lenB;

        for (; i < (int)a.size() && j < (int)b.size(); ++i, ++j) {
            if (a[i] != b[j]) return a[i] > b[j];
        }
        return false;
    };

    sort(nums.begin(), nums.end(), cmp);

    for (const string &c : nums) cout << c << " ";

    cout << "\n" << nums[k - 1];

    return 0;
}
