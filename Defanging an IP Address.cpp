// https://leetcode.com/problems/defanging-an-ip-address/description/

class Solution {
public:
    string defangIPaddr(string address) {
        string tmp = "[.]";
        vector<string> vs;

        for (auto c : address) {
            string s = "";
            s += c;
            vs.push_back(s);
        }

        for (auto& s : vs)
            if (s == ".")
                s = tmp;

        address.clear();
        for (auto i : vs) {
            address += i;
        }

        return address;
    }
};