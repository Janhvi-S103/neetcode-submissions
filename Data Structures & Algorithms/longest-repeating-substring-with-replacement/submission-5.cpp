class Solution {
public:
    
    int characterReplacement(string s, int k) {
        int l=0, r=0, maxL=0;
        while(r<s.length())
        {
            string sub= s.substr(l,r-l+1);
            int len = isValidSubstr(sub,k);
            if(len > 0)
            {
                maxL=max(maxL,len);
                r++;
            }
            else
                l++;
        }
        return maxL;
    }

    int isValidSubstr(string sub, int k)
    {
        unordered_map<char,int> freq;
        int maxr=0;
        for(auto s: sub)
        {
            freq[s]++;
            maxr = max(maxr, freq[s]);
        }

        return sub.length()- maxr > k ? 0 : sub.length();
    }
};
