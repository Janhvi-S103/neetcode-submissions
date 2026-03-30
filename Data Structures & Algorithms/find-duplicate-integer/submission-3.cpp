class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        /*HashMap
        unordered_set<int>dup;
        for(auto x: nums)
        {
            if(dup.find(x)!=dup.end())
            {
                return x;
            }
            dup.insert(x);
        }
        return -1; */

        //Using Sorting
        sort(nums.begin(), nums.end());
        for(int i=0; i < nums.size(); i++)
        {
            if(nums[i]==nums[i+1])
                return nums[i];
        }
        return -1;

    }
};
