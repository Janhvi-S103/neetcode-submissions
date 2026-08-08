class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> perm;
        int start=0;
        solve(nums, start, perm);
        return perm;
    }

    void solve(vector<int>& nums, int start, vector<vector<int>>& perm)
    {

        if(start==nums.size()-1)
        {
            perm.push_back(nums);
            return;
        }
        for(int i=start; i < nums.size(); i++)
        {
            swap( nums[i],nums[start]);
            solve(nums, start+1, perm);
            swap(nums[start], nums[i]); //revert
        }
    }
};
