class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        unordered_map<int, vector<int>> mp;

        for(int i=nums.size()-1;i>=0;i--)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                int diag=i+j;

                mp[diag].push_back(nums[i][j]);
            }
        }
        vector<int>result;
        int diagonal=0;

        while(mp.find(diagonal) != mp.end())
        {
            for(int &num : mp[diagonal])
            {
                result.push_back(num);
            }
            diagonal++;
        }
        return result;
    }
};