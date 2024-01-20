class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size()-1;
        int jump=0;
        int maxReach=0;
        int CurrReach=0;
        for(int i=0;i<n;i++)
        {
            maxReach=max(maxReach,i+nums[i]);

            if(i==CurrReach)
            {
                jump++;
                CurrReach=maxReach;
            }
        }
        return jump;
    }
};