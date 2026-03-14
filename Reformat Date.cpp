/**
 * problem link : https://leetcode.com/problems/reformat-date/
 * 
 * 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string date = "2th Jun 1933", part, refind = "";
    stringstream ss(date);
    vector<string>temp;
    while(ss >> part) temp.push_back(part);
    if(temp[1] == "Jan") temp[1] = "-01-";
    if(temp[1] == "Feb") temp[1] = "-02-";
    if(temp[1] == "Mar") temp[1] = "-03-";
    if(temp[1] == "Apr") temp[1] = "-04-";
    if(temp[1] == "May") temp[1] = "-05-";
    if(temp[1] == "Jun") temp[1] = "-06-";
    if(temp[1] == "Jul") temp[1] = "-07-";
    if(temp[1] == "Aug") temp[1] = "-08-";
    if(temp[1] == "Sep") temp[1] = "-09-";
    if(temp[1] == "Oct") temp[1] = "-10-";
    if(temp[1] == "Nov") temp[1] = "-11-";
    if(temp[1] == "Dec") temp[1] = "-12-";

    temp[0].pop_back();
    temp[0].pop_back();

    if(temp[0].size() == 1){
        temp[0].push_back('0');
        reverse(temp[0].begin(), temp[0].end());
    }
    
    for (int i = temp.size() - 1; i >= 0; i--)
        refind += temp[i];

    cout << refind;
    return 0;
}
*/


class Solution {
public:
    string reformatDate(string date) {
        string part, refind = "";
        stringstream ss(date);
        vector<string>temp;
        while(ss >> part) temp.push_back(part);
        if(temp[1] == "Jan") temp[1] = "-01-";
        if(temp[1] == "Feb") temp[1] = "-02-";
        if(temp[1] == "Mar") temp[1] = "-03-";
        if(temp[1] == "Apr") temp[1] = "-04-";
        if(temp[1] == "May") temp[1] = "-05-";
        if(temp[1] == "Jun") temp[1] = "-06-";
        if(temp[1] == "Jul") temp[1] = "-07-";
        if(temp[1] == "Aug") temp[1] = "-08-";
        if(temp[1] == "Sep") temp[1] = "-09-";
        if(temp[1] == "Oct") temp[1] = "-10-";
        if(temp[1] == "Nov") temp[1] = "-11-";
        if(temp[1] == "Dec") temp[1] = "-12-";

        temp[0].pop_back();
        temp[0].pop_back();

        if(temp[0].size() == 1){
            temp[0].push_back('0');
            reverse(temp[0].begin(), temp[0].end());
        }
    
        for (int i = temp.size() - 1; i >= 0; i--)
            refind += temp[i];

        return refind;
    }
};