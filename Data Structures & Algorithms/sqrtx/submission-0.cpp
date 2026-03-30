class Solution {
public:
    int mySqrt(int x) {
        int count=0;
        for(int i=1; i <= x; i=i+2)
        {
            if(x>0)
                {
                    x=x-i;
                    count++;
                }
            else
                break;
        }
        return count;
    }
};