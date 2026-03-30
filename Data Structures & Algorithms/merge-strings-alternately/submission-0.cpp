class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0, j=0;
        string s1="";
        while(i < word1.length() && j<word2.length())
        {
            s1=s1+word1[i]+word2[j];
            i++;
            j++;
        }
        while(i < word1.length())
        {
            s1=s1+word1[i];
            i++;
        }
        while(j < word2.length())
        {
            s1=s1+word2[j];
            j++;
        }
        return s1;
    }
};