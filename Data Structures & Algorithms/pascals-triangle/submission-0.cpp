class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>>pas;
       pas= pascal(pas,numRows);
       return pas; 
    }

    vector<vector<int>> pascal(vector<vector<int>> rs, int nr)
    {
        vector<int> nexR;

        vector<int>currR;
        if(rs.size()>0) currR = rs[rs.size()-1];

        nexR.push_back(1);
        if(currR.size()>0)
        {
            for(int i=0; i < currR.size()-1; i++)
            {
                nexR.push_back(currR[i]+ currR[i+1]);
            }
            nexR.push_back(1);
        }

        rs.push_back(nexR);

        if(nr == 1)
            return rs;
        return pascal(rs, nr-1);
    }
};