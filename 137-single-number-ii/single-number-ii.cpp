class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }

        for(auto x: mpp)
        {
            if(x.second==1)
            {
                return x.first;
            }
        }
        return -1;
    }
};