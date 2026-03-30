class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        /*Method 1
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
        return t; */
        // method 2
        vector<int> t(nums.size(),1);
        int prod=1;
        for(int i=1; i< nums.size();i++)
        {
            t[i] = t[i-1]* nums[i-1];
        }
        for(int i= nums.size()-1; i >=0; i--)
        {
            t[i] *= prod;
            prod *= nums[i]; 
        }
        return t;
    }
};
