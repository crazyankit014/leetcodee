class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int>mpp;
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }

        for(auto x: mpp)
        {
            if(x.second == 2)
             ans.push_back(x.first);
        }
         for(int i=1;i<=n;i++)
         {
             if(mpp.find(i)== mpp.end())
             {
                 ans.push_back(i);
             }
         }
        return ans;
    }
};