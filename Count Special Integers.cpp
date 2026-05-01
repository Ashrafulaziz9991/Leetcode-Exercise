#include <bits/stdc++.h>
using namespace std;
/**
bool ok(int n){
    vector<int>v;
    set<int>st;
    int count = 0;

    while (n > 0)
    {
        int temp = n % 10;
        v.push_back(temp);
        st.insert(temp);
        count++;
        n = n / 10;
    }
    return v.size() == st.size();
}
*/

// bool ok(int n) {
//     bool seen[10] = {false};
//     while (n > 0) {
//         int digit = n % 10;
//         if (seen[digit]) return false;
//         seen[digit] = true;
//         n /= 10;
//     }
//     return true;
// }

bool ok(int n) {
    int seen = 0; // use bitmask instead of array
    while (n > 0) {
        int digit = n % 10;
        if (seen & (1 << digit)) return false;
        seen |= (1 << digit);
        n /= 10;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n , counter = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if(ok(i))
            counter++;
    }

    cout << counter << endl;
    
    return 0;
}