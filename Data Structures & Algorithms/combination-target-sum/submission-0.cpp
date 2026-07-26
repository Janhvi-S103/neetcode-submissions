class Solution {
   public:
    vector<vector<int>> ans;
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        rec(nums, target, 0, 0, vector<int>());
        return ans;
    }
    void rec(vector<int>& nums, int target, int currsum, int idx, vector<int> currnums) {
        if (currsum == target) {
            ans.push_back(currnums);
            return;
        }
        if (currsum > target) return;

        for (int i = idx; i < nums.size(); i++) {
            currnums.push_back(nums[i]);
            rec(nums, target, currsum + nums[i], i, currnums);
            currnums.pop_back();
        }
    }
};
