class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*Method 1
        vector<int> num;
        for(int i=0; i<nums.size();i++)
        {
            for(int j= i+1; j< nums.size(); j++)
            {
                if(nums[i] + nums[j] == target && i != j)
                {
                    num.push_back(i);
                    num.push_back(j);
                    break;
                }
            }
        }
        sort(num.begin(), num.end());
        return num;
        */
        //Method 2
        unordered_map<int, int> num;
        for(int i=0; i < nums.size(); i++)
        {
            if(num.find(target-nums[i]) == num.end())
            num[nums[i]] = i ;
            else
            return {num[target-nums[i]],i};
        }
        return {-1,-1};
    }
};
