// problem link https://leetcode.com/problems/find-most-frequent-vowel-and-consonant/description/?envType=daily-question&envId=2025-09-13

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;

    vector<char>consonent = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
    vector<char>vowel = {'a', 'e', 'i', 'o', 'u'};

    int c_count = 0, cmx = 0;
    int v_count = 0, vmx = 0;


    for (int i = 0; i < consonent.size(); i++)
    {
        c_count = count(s.begin(), s.end(), consonent[i]);
        cmx = max(cmx, c_count);
    }

    for (int i = 0; i < vowel.size(); i++)
    {
        v_count = count(s.begin(), s.end(), vowel[i]);
        vmx = max(vmx, v_count);
    }

    cout << cmx << " " << vmx << "\n";
    
    
    return 0;
}
*/

class Solution {
public:
    int maxFreqSum(string s) {
        vector<char> consonent = {'b', 'c', 'd', 'f', 'g', 'h', 'j',
                                  'k', 'l', 'm', 'n', 'p', 'q', 'r',
                                  's', 't', 'v', 'w', 'x', 'y', 'z'};
        vector<char> vowel = {'a', 'e', 'i', 'o', 'u'};

        int c_count = 0, cmx = 0;
        int v_count = 0, vmx = 0;

        for (int i = 0; i < consonent.size(); i++) {
            c_count = count(s.begin(), s.end(), consonent[i]);
            cmx = max(cmx, c_count);
        }

        for (int i = 0; i < vowel.size(); i++) {
            v_count = count(s.begin(), s.end(), vowel[i]);
            vmx = max(vmx, v_count);
        }
        return vmx+cmx;
    }
};