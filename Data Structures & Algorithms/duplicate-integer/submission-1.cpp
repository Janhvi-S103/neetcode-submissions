class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        /* Method 1
        for(int i=0; i<nums.size();i++)
        {
            int c=0;
            for(int j=0; j< nums.size();j++)
            {
                if(nums[i]==nums[j])
                    c++;
            }
            if(c>=2)
                return true;
        }
        return false;
        */
        // Method 2 
        std::unordered_set<int> dup;
        for(int x: nums)
        {
            if(dup.count(x))
                return true;
            else
            dup.insert(x);
        }
        return false;
    }
};