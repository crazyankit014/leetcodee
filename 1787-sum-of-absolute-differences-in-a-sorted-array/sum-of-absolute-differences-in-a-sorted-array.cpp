class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        // int n=nums.size();
        // vector<int> result(n,0);
        // for(int i=0;i<n;i++)
        // {
        //     int sum=0;
        //     for(int j=0;j<n;j++)
        //     {
        //          sum=sum+abs(nums[i]-nums[j]);
        //     }
        //       result[i]=sum;
        // }
        // return result;

    int n=nums.size();
    vector<int> result(n);
    int sum = accumulate(nums.begin(),nums.end(),0);
    int prefixsum=0;
    for(int i=0;i<n;i++)
    {
        int leftsum=prefixsum;
        int rightsum=sum-prefixsum-nums[i];

        result[i]= (nums[i]*i) - leftsum+ rightsum - (nums[i]*(n-i-1));

        prefixsum += nums[i];
    }
   return result;
    }
};

 