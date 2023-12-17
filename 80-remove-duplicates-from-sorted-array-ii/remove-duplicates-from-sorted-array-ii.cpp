class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int i=0;
        for(auto e: nums)
        {
            if(i<2 || nums[i-2]!=e){
                nums[i]=e;
                i++;
            }
        }
      return i;
    }
};