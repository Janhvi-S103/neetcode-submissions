class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //Method 1
        vector<int> t;
        for(int i=0; i<nums.size();i++)
        {
            int prod = 1;
            for(int j=0; j < nums.size(); j++)
            {
                if(j!=i)
                {
                    prod *= nums[j];
                }
            }
            t.push_back(prod);
        }
        return t;
    }
};
