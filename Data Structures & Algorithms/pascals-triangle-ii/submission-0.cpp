class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> nr;
        nr = row(nr, rowIndex);
        return nr;
    }
    vector<int> row(vector<int> r, int rN)
    {
        vector<int> nr;

        nr.push_back(1);

        if(r.size() > 0){
            for(int i = 0;i< r.size()-1; i++){
                nr.push_back(r[i]+r[i+1]);
            }
            nr.push_back(1);
        }

        if(rN == 0)
            return nr;
        else 
            return row(nr, rN-1);
    }
};