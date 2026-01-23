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

    string s = "tree";
    unordered_map<char, int>ump;

    for(char &c : s){
        ump[c]++;
    }
    priority_queue<int>pq;
    for(auto i : ump){
        pq.push()
        cout << i.first << " " << i.second << endl;
    }
    


    // int i = 0;
    
    // while (s[i] != s[i + 1])
    // {
    //     swap(s[i], s[i + 1]);
    //     i++;
    // }
    

    cout << s;
    return 0;
}