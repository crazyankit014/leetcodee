class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int result=0;
        int l=0;
        long currsum=0;
        for(int i=0;i<n;i++)
        {
            long target=nums[i];
            currsum=currsum+nums[i];
            while((i-l+1)*target - currsum >k) {
                currsum=currsum-nums[l];
                l++;
            }
            result=max(result,i-l+1);
        }
   return result;

    }
};