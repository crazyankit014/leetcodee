class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        long long x;
        long long  y;
        for(int i=1;i<=n;i++)
        {
           x=nums[0]*nums[1];
           y=nums[n-1]*nums[n-2];
        }
        return y-x;
    }
};