class Solution {
public:
    // We pass left, mid, and right to define which segment to merge
    void merge(vector<int>& nums, int left, int mid, int right, vector<int>& temp) {
        int i = left;      // Start of left half
        int j = mid + 1;   // Start of right half
        int k = left;      // Pointer for the temp array

        // Compare elements from both halves and pick the smaller one
        while (i <= mid && j <= right) {
            if (nums[i] <= nums[j]) {
                temp[k++] = nums[i++];
            } else {
                temp[k++] = nums[j++];
            }
        }

        // Clean up: if one side finishes, copy the remaining elements from the other
        while (i <= mid) temp[k++] = nums[i++];
        while (j <= right) temp[k++] = nums[j++];

        // Move the sorted elements back into the original nums array
        for (int p = left; p <= right; p++) {
            nums[p] = temp[p];
        }
    }

    void solve(vector<int>& nums, int left, int right, vector<int>& temp) {
        if (left >= right) return; // Base case: segment is size 1

        int mid = left + (right - left) / 2;

        // Recursively divide
        solve(nums, left, mid, temp);
        solve(nums, mid + 1, right, temp);

        // Merge the sorted halves
        merge(nums, left, mid, right, temp);
    }

    vector<int> sortArray(vector<int>& nums) {
        // One temporary vector used throughout to save memory allocations
        vector<int> temp(nums.size());
        solve(nums, 0, nums.size() - 1, temp);
        return nums;
    }
};