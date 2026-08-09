class Solution {
public:
    int trap(vector<int>& height) {
        int left=0, right=height.size()-1, rightmax=0, leftmax=0;
        int store=0; 
        while(left < right)
        {
            if(height[left]<= height[right] )
            {
                leftmax=max(leftmax, height[left]);
                store+= leftmax-height[left];
                left++;
            }
            else
            {
                rightmax=max(rightmax, height[right]);
                store+=rightmax-height[right];
                right--;
            }
        }
        return store;
    }
};
