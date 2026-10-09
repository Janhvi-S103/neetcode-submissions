class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>temp1;
        int sum=0;
        for(int i=0; i<nums.size()-2; i++)
        {
            int j=i+1, k= nums.size()-1;
            while(j<=k-1)
            {
                sum= nums[i]+nums[j]+nums[k];
                if(sum == 0)
                {
                    vector<int>temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    temp1.insert(temp);
                    j++;
                    k--;
                }
                else if(sum < 0)
                    j++;
                else
                    k--;   
            }
            while(nums[i]==nums[i+1] && i <nums.size()-3)
            {
                i++;
            }
        }
        vector<vector<int>> temp2;
        for(auto n: temp1)
        {
            temp2.push_back(n);
        }
        return temp2;
    }
};
