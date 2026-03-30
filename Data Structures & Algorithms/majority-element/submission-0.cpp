class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> major;
        for(auto x: nums)
        {
            major[x]++;
            if(major[x] > nums.size()/2)
            {
                return x;
            }   
        }  
        return -1;;
    }
};