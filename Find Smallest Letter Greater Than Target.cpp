/**
 * * problem link : https://leetcode.com/problems/find-smallest-letter-greater-than-target/
 * 
 * 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<char>letters = {'c','f','j'};
    char bg, target = 'c';

    sort(letters.begin(), letters.end());

    // for(char letter : alphabet) cout << letter << " ";
    // char inst_mx = alphabet[0];
    if(target == 'z'){
        cout << letters[0] << endl;
        return 0;
    }
    for (int i = 0; i < letters.size(); i++)
    {
        if(letters[i] > target){
            bg = letters[i];
            break;
        }
    }
    cout << bg << endl;
    return 0;
}
*/

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if (target == 'z') {
            return letters[0];
        }
        for (int i = 0; i < letters.size(); i++) {
            if (letters[i] > target) {
                return letters[i];
            }
        }
        return letters[0];
    }
};