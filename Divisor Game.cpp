/*

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <climits>
#include <cstring>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int alice = 0, bob = 0;
    int alice_take = 0, bob_take = 0;
    bool turn = true;

    while (n > 0)
    {
        if (turn)
        {
            alice_take = bob_take + 1;
            if(alice_take > n) alice_take = n;
            n = n - alice_take;
            alice += alice_take;
        }
        else
        {
            bob_take = alice_take + 1;
            if(bob_take > n) bob_take = n;
            n = n - bob_take;
            bob += bob_take;
        }
        turn = !turn;
    }

    if (alice >= bob)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    cout << alice << endl;
    cout << bob << endl;

    // int n = 4;
    // int alice_take = 0, bob_take = 0;
    // int alice_total = 0, bob_total = 0;
    // bool turn = true; // true = Alice, false = Bob

    // while (true)
    // {
    //     if (turn)
    //     {
    //         alice_take = bob_take + 1;
    //         if (alice_take > n)
    //         {

    //             cout << "Alice wins\n";
    //             break;
    //         }
    //         n -= alice_take;
    //         alice_total += alice_take;
    //     }
    //     else
    //     {
    //         bob_take = alice_take + 1;
    //         if (bob_take > n)
    //         {
    //             cout << "Bob wins\n";
    //             break;
    //         }

    //         n -= bob_take;
    //         bob_total += bob_take;
    //     }

    //     turn = !turn;
    // }

    // cout << "Alice total = " << alice_total << endl;
    // cout << "Bob total   = " << bob_total << endl;
    // cout << "Stones left = " << n << endl;

    return 0;
}
*/

/*

turn    alice      bob     stone left
0           0       0      10
1           1       0       9
2           0       2       7
3           3       0       4
4           0       4       0 


*/

// problem link : https://leetcode.com/problems/divisor-game/

class Solution {
public:
    bool divisorGame(int n) {
        return n % 2 == 0;
    }
};