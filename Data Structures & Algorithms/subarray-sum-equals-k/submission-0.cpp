class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> prevSum;
    int count = 0;
    int currSum = 0;

    prevSum[0] = 1;

    for (int num : nums) {
        currSum += num;

        if (prevSum.find(currSum - k) != prevSum.end()) {
            count += prevSum[currSum - k];
        }

        prevSum[currSum]++;
    }

    return count;
}
};