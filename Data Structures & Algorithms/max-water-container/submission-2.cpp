class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0 , j= heights.size()-1;
        int maxArea=0, area;
        while(i <= j )
        {
            area=min(heights[i],heights[j]) * (j-i);
            if(heights[i]<heights[j])
                i++;
            else
                j--;
            if(maxArea<area)
            {
                maxArea=area;
            }
        }
        return maxArea;
    }
};
