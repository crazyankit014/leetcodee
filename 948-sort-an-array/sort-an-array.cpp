class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
    //    priority_queue<int>q;
    //    int n=nums.size();
    //    for(int i=0;i<n;i++)
    //    {
    //        q.push(nums[i]);
    //    }
    //   for(int i=0;i<n;i++)
    //   {
    //       nums[i]=q.top();
    //       q.pop();
    //   }
    //   reverse(nums.begin(),nums.end());
    //   return nums;

    sort(nums.begin(),nums.end());
    return nums;
    }
};