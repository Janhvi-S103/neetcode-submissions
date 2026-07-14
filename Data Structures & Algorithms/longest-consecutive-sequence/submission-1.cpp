class Solution {
public:
    // int longestConsecutive(vector<int>& nums) {
    //     unordered_set<int> res;
    //     int count =0;
    //     for(int x: nums)
    //     {
    //         res.insert(x);
    //     }
    //     for(int i: res)
    //     {
    //         if(res.find(i-1) == res.end())
    //         {
    //             int curr = i, temp =0;
    //             while(res.find(curr) != res.end())
    //             {
    //                 curr++;
    //                 temp++;
    //             }
    //             count = max(temp, count);
    //         }
    //     }
    //     return count;
    // }
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> res;
        int count =0;
        for(int x: nums)
        {
            res.insert(x);
        }
        while(res.size() > 0)
        {
            int i = *res.begin(), i1 = *res.begin();
            res.erase(i);
            int curr = 1;
            while(res.find(i-1) != res.end())
            {
                curr++;
                i--;
                res.erase(i);
            }
            i = i1;
            while(res.find(i+1) != res.end())
            {
                curr++;
                i++;
                res.erase(i);
            }

            count = max(curr, count);

            cout<<res.size() << "\n";
        }
        return count;
    }
};
