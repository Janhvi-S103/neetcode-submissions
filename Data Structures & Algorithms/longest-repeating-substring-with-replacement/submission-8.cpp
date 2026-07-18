class Solution {
public:
    
    /*int characterReplacement(string s, int k) {
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

    unordered_map<char,int> freq;
    int isValidSubstr(string sub, int k)
    {
        int maxr=0;
        for(auto s: sub)
        {
            freq[s]++;
            maxr = max(maxr, freq[s]);
        }

        return sub.length()- maxr > k ? 0 : sub.length();
    }*/
    unordered_map<char,int> freq;
    int characterReplacement(string s, int k) {
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
