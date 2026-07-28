class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        for(int i=0; i <intervals.size(); i++)
        {
            if(newInterval[1] < intervals[i][0])
            {
                intervals.insert(intervals.begin()+i, newInterval);
                return intervals;
            }
            if(newInterval[0] <=intervals[i][1])
            {
                intervals[i]={min(intervals[i][0], newInterval[0]), max(intervals[i][1], newInterval[1])};
                int j=i+1;
                while(j< intervals.size() && intervals[j][0] <= intervals[i][1])
                {
                    intervals[i]= {min(intervals[i][0], intervals[j][0]), max(intervals[i][1], intervals[j][1])};
                    intervals.erase(intervals.begin()+j);
                }
                return intervals;
            }
        }
        intervals.push_back(newInterval);
        return intervals;
    }
};
