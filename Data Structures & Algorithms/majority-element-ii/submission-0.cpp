class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>res;
        unordered_map<int,int>major;
        for(int x:nums)
        {
            major[x]++;
            if(major[x]>nums.size()/3 && find(res.begin(),res.end(),x) == res.end())
            {
                res.push_back(x);
            }
        }
        return res;
    }
};