class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        /*
        unordered_map<int, int> num;
        vector<int> freq;

        for(auto x: nums)
        {
            num[x]++;
        }
        while(k>0)
        {
            int max= num.begin()->second;
            int key = num.begin()->first;
            for(auto& pair : num)
            {
                if(pair.second > max)
                {
                    max=pair.second;
                    key=pair.first;
                }
            }
            freq.push_back(key);
            num.erase(key);
            k--;
        }
        return freq;
        */

        //Method 2
        unordered_map<int, int> num;
        vector<int> freq;
        vector<vector<int>> buck(nums.size()+1);
        for(auto x: nums)
        {
            num[x]++;
        }
        for(auto& p : num)
        {
            buck[p.second].push_back(p.first);
        }
        
        for(int i=buck.size()-1;i>0;i--)
        {
            for(int n: buck[i])
            {
                freq.push_back(n);
                if(freq.size()==k)
                    return freq;
            }
        }
        return freq;
    }
};
