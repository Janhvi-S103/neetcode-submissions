class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        unordered_map<char,int>freqrow[9];
        unordered_map<char,int> freqcol[9];
        unordered_map<char,int>freqbox[9];
        for(int i=0; i <9; i++)
        {
            for(int j=0; j <9; j++)
            {
                char ch=board[i][j];
                int box=(i/3)*3+(j/3);
                if(ch== '.')
                    continue;
                freqrow[i][ch]++;
                freqcol[j][ch]++;
                freqbox[box][ch]++;
                if(freqrow[i][ch] > 1 || freqcol[j][ch]>1 || freqbox[box][ch] >1)
                    return false;
            }
        }
        return true;
    }
};
