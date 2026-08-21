#include<iostream>
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> count;
        for(int i=0;i<=n;i++)
        {
            int x=__builtin_popcount(i);
            count.push_back(x);
        }
        return count;
    }
};
