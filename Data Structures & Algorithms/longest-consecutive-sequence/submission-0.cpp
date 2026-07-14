class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> res;
        int count =0;
        for(int x: nums)
        {
            res.insert(x);
        }
        for(int i: res)
        {
            if(res.find(i-1) == res.end())
            {
                int curr = i, temp =0;
                while(res.find(curr) != res.end())
                {
                    curr++;
                    temp++;
                }
                count = max(temp, count);
            }
        }
        return count;
    }
};
