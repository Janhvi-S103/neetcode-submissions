class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix[0].empty())
            return false;
        int row=matrix.size(), col= matrix[0].size();
        int start=0, end = row*col-1;
        while(start <= end)
        {
            int  mid= (start+end)/2;
            int r= mid/ col;
            int c= mid % col;
            if(matrix[r][c] == target)
            {
                return true;
            }
            else if(matrix[r][c]<target)
            {
                start=mid+1;
            }
            else if(matrix[r][c]>target)
            {
                end= mid-1;
            }
        }
    return false;
    }
};
