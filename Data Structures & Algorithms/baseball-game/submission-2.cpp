class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> rec;
        for(auto x: operations)
        {
            if(x == "+")
            {
                int n=rec.size();
                rec.push_back(rec[n-1]+rec[n-2]);
            }
            else if(x== "D")
            {
                int n=rec.size();
                rec.push_back(2*rec[n-1]);
            }
            else if(x== "C")
            {
                rec.pop_back();
            }
            else
                rec.push_back(stoi(x));
        }
        return accumulate(rec.begin(), rec.end(),0);
    }
};