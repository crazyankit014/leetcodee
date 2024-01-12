class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>mpp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }

        for(auto x: mpp)
        {
            if(x.second==1)
            {
                ans.push_back(x.first);
            }
        }
        return ans;

    }
};