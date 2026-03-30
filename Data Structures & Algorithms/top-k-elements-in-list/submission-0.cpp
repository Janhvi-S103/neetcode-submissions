class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
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
    }
};
