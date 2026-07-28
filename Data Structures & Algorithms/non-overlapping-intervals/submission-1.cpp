class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int count=0;
        sort(intervals.begin(), intervals.end());

        int i=1;
        while(i < intervals.size())
        {
            if(intervals[i][0] < intervals[i-1][1])
            {
                count++;
                intervals[i][1]=min(intervals[i-1][1], intervals[i][1]);
                intervals.erase(intervals.begin()+i-1);
            }
            else
                i++;
        }
        return count;
    }
};
