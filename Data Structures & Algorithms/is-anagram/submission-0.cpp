class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> v1;
        vector<char> v2;
        for(auto c: s)
        {
            v1.push_back(c);
        }
        for(auto c: t)
        {
            v2.push_back(c);
        }
        if(v1.size() != v2.size())
            return false;
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        if(v1== v2)
            return true;
        else 
            return false;

    }
};
