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

    int n = nums.size();
    std::vector<int> result(n, 0);  // Initialize result vector with zeros

    // Calculate the prefix sum of absolute differences from the left
    int leftSum = 0;
    for (int i = 0; i < n; i++) {
        result[i] += i * nums[i] - leftSum;
        leftSum += nums[i];
    }

    // Calculate the suffix sum of absolute differences from the right
    int rightSum = 0;
    for (int i = n - 1; i >= 0; i--) {
        result[i] += rightSum - (n - 1 - i) * nums[i];
        rightSum += nums[i];
    }

    return result;

    }
};

 