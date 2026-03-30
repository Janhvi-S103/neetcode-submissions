class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //HashMap
        unordered_set<int>dup;
        for(auto x: nums)
        {
            if(dup.find(x)!=dup.end())
            {
                return x;
            }
            dup.insert(x);
        }
        return -1;
    }
};
