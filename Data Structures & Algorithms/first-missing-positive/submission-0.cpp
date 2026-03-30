class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> temp;
        int min_pos=1;
        for(auto x: nums)
        {
            temp.insert(x);
        }

        for(int i=1; i <= nums.size() ; i++)
        {
            if(!temp.contains(i))
               return i;
        }
        return nums.size()+1;
    }
};