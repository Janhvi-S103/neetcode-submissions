class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        
        for(int i=0; i< board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j] == word[0])
                {
                    if(rec(board,word,i,j,0))
                        return true;
                }
            }
        }
        return false;
    }

    bool rec(vector<vector<char>>& board, string word, int r, int c,int idx)
    {
        if(idx==word.size())
            return  true;
        if(r<0 || c<0 || r>= board.size() || c>=board[0].size() || board[r][c] != word[idx])
            return false;
        
        char ch= board[r][c];
        board[r][c]='#';

        bool found=rec(board,word,r+1,c,idx+1)|| rec(board,word,r-1,c,idx+1) || rec(board,word,r,c+1,idx+1) || rec(board,word,r,c-1,idx+1);

        if(found==false)
            board[r][c]=ch;

        return found;
    }
};
