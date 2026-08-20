class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProd=INT_MIN;
        int currmin=1,currmax=1;
        for(int i=0; i <nums.size(); i++)
        {
            if(nums[i]<0)
            {
                swap(currmax,currmin);
            }
            currmax=max(nums[i],currmax*nums[i]);
            currmin=min(nums[i],currmin*nums[i]);
            maxProd=max(maxProd,currmax);
        }
        return maxProd;
    }
};
