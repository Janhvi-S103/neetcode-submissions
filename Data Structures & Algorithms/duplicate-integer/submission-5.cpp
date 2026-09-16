class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       std::unordered_set<int> dup;
               for(int x: nums)
                       {
                                   if(dup.count(x))
                                                   return true;
                                                               else
                                                                           dup.insert(x);
                                                                                   }
                                                                                           return false; 
    }
};