class Solution {
public:
    int search(vector<int>& nums, int target) {
      int strt=0, end = nums.size()-1, piv=nums.size()-1, index=-1;

      while(strt<  end)
      {
        int mid= (strt+ end)/2;
        if(nums[mid] > nums[end])
        {
            strt= mid+1;
        }
        else 
            end= mid;
      }  
      piv=strt;


      strt=0;
      int end1= piv-1;

      while(strt <= end1)
      {
        int mid= (strt+end1)/2;
        if(nums[mid]== target)
        {
            return mid;
        }
        else if(nums[mid] < target)
        {
            strt= mid+1;
        }
        else
            end1 = mid-1;;
      }


      end= nums.size()-1;
      int strt1= piv;

      while(strt1 <= end)
      {
        int mid= (strt1+end)/2;
        if(nums[mid]== target)
        {
            return mid;
        }
        else if(nums[mid] < target)
        {
            strt1= mid+1;
        }
        else
            end= mid-1;;
      }
      return -1;
    }
};
