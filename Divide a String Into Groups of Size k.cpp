// problem link : https://leetcode.com/problems/divide-a-string-into-groups-of-size-k/

class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> groups;
        int x = ceil(s.size() / (float)k);
        int diff = x * k - s.size();
        if (s.size() % k != 0)
            for (int i = 0; i < diff; i++)
                s += fill;

        string tmp = "";

        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            tmp += c;
            if (tmp.size() == k) {
                groups.push_back(tmp);
                tmp.clear();
            }
        }
        return groups;
    }
};