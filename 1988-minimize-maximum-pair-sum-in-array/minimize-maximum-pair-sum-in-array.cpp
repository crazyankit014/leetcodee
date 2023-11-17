class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());

        int i=0;
        int j=n-1;

        int mini=INT_MIN;
        while(i<j)
        {
            int currsum=nums[i]+nums[j];
            mini=max(mini,currsum);
            i++;
            j--;
        }
        return mini;
    }
};