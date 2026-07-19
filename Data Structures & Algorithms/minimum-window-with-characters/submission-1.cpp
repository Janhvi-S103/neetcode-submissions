class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> freq_t;
        // transform(s.begin(), s.end(), s.begin(), ::toupper);
        // transform(t.begin(), t.end(), t.begin(), ::toupper);
        for(auto i: t)
        {
            freq_t[i]++;
        }
        int min_l= INT_MAX;
        int l=0,r=0,start =0;
        int req= freq_t.size();
        int curr=0;
        unordered_map<char, int> win;
        while(r<s.length())
        {
            char c= s[r];
            win[c]++;

            if(freq_t.count(c) && win[c] == freq_t[c])
            {
                curr++;
            }

            shrinkWin(s,l,r,freq_t,win,curr,req,start,min_l);

            r++;
        }

        return min_l==INT_MAX ? "" : s.substr(start,min_l);
    }

    void shrinkWin(string s, int& l, int r, unordered_map<char, int> freq_t, unordered_map<char, int> &win, int &curr, int req, int &start, int &min_l)
    {
        while(curr == req)
        {
            if(r-l+1 < min_l)
            {
                min_l= r-l+1;
                start=l;
            }
            char ch= s[l];
            win[ch]--;
            if(freq_t.count(ch) && win[ch] < freq_t[ch])
                curr--;
            l++;
        }
    }
};
