class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int n=nums.size();
        // return nums[n/2];
        int cnt=0;
        int el;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(cnt==0)
            {
                cnt=1;
                el=nums[i];
            }
            else if(el==nums[i])cnt++;
            else cnt--;
        }
        int cnt1=0;
        for(int  i=0;i<n;i++)
        {
            if(nums[i]==el) cnt1++;
        }
        if(cnt1>(n/2)) return el;
        return -1;
    }
};