#include <bits/stdc++.h>
class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        for(auto p: strs)
        {
                s += p + "-";
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> str;
        stringstream ss(s);
        string segment;
        while(getline(ss,segment,'-'))
        {
            str.push_back(segment);
        }
        return str;
    }
};
