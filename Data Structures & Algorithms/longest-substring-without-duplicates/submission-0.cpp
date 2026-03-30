class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int maxlength=0;
        unordered_set<int> subs;
        for(int right=0; right <s.size(); right++)
        {
            while(subs.find(s.at(right)) != subs.end())
            {
                subs.erase(s.at(left));
                left++;
            }
            subs.insert(s.at(right));
            maxlength=max(maxlength, right-left+1);
        }
        return maxlength;
    }
};
