class Solution {
public:
    int constrainedSubsetSum(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<pair<int,int>>pq;
        pq.push({nums[0],0});
        vector<int>dp(n,0);
        dp[0]=nums[0];
        int ans= nums[0];
        for(int i=1;i<n;i++)
        {
            while(!pq.empty())
            {
                auto p=pq.top();
                if(i-p.second>k)
                pq.pop();
            
            else 
               break;
            }

            dp[i]=max(nums[i],nums[i]+pq.top().first);
            ans=max(ans,dp[i]);
            pq.push({dp[i],i});
        }
        return ans;
    }
};