class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>>ans;
        ans.push_back(intervals[0]);
        for(auto x: intervals)
        {
            int start= x[0], end = x[1], lastEnd= ans.back()[1];
            if(start <= lastEnd)
                ans.back()[1]= max(lastEnd,end);
            else
                ans.push_back({start,end});
        }
        return ans;
    }
};
