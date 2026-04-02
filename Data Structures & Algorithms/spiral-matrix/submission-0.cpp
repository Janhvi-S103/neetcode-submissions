class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c= matrix[0].size();
        vector<int> temp;
        int top=0, bottom=r-1, right=c-1, left=0;
        while(top <=bottom && left <= right)
        {
            for(int i=left; i <=right; i++)
            {
                temp.push_back(matrix[top][i]);
            }
            top++;
            for(int j=top; j <=bottom; j++)
            {
                temp.push_back(matrix[j][right]);
            }
            right--;
            if(top <=bottom)
            {
            for(int k= right;k >=left; k-- )
            {
                temp.push_back(matrix[bottom][k]);
            }
            bottom--;
            }
            if(left <= right)
            {
                for(int x=bottom; x >=top; x--)
                {
                    temp.push_back(matrix[x][left]);
                }
                left++;
            }
        }
        return temp;
    }
};
