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

    vector<string> words = {"the","day","is","sunny","the","the","the","sunny","is","is"};
    // priority_queue<string>pq;
    unordered_map<string, int> ump;
    for(auto &i : words) ump[i]++;
    // priority_queue<int>pq2;
    priority_queue<unordered_map<string, int>>pq2;

    for(auto &i : ump){
        pair<string, int>x;
        x = {i.first, i.second};
        pq2.push(x);
    }

    
    
    return 0;
}