class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector< long long int>result;

        for(int i=0;i<n;i++)
        {
           long long  int sum=0;
            for(int j=i;j<n;j++)
            {
                sum=sum+nums[j];
                result.push_back(sum);
            }
        }

        sort(result.begin(),result.end());

            long long int ans=0;
            for(int i=left-1;i<=right-1;i++)
            {
               ans=ans+result[i];
            }
        return ans % 1000000007;
    }
};