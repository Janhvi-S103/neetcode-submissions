class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> freq;
        int l=0, r=0, maxL=0, maxF=0;
        while(r<s.length())
        {
            freq[s[r]]++;
            maxF= max(maxF, freq[s[r]]);
            if((r-l+1)- maxF > k)
            {
                freq[s[l]]--;
                l++;
            }
            
            maxL=max(maxL, r-l+1);
            r++;
        }
        return maxL;
    }
};
