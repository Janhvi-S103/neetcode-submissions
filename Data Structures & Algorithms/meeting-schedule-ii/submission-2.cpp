/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        vector<int>str, en;
        for(auto x: intervals)
        {
            str.push_back(x.start);
            en.push_back(x.end);
        }
        sort(str.begin(), str.end());
        sort(en.begin(), en.end());
        int rooms=0, maxroom=0, i=0, j=0;
        while(i < intervals.size())
        {
            if(str[i] < en[j])
            {
                i++;
                rooms++;
            }
            else
            {
                j++;
                rooms--;
            }
            maxroom=max(maxroom,rooms);
        }
        return maxroom;
    }
};
