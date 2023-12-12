class Solution {
public:
    int maxProduct(vector<int>& nums) {
    //  priority_queue<int>pq;
    //  for(auto i: nums) 
     
    //      pq.push(i);
    //      int x=pq.top();
    //      pq.pop();
    //      int y=pq.top();
    //      pq.pop();
    //      return (x-1) * (y-1);
    sort(nums.begin(),nums.end());
    int n=nums.size();
    int first=nums[n-1]-1;
    int second=nums[n-2]-1;
    int product=first*second;
    return product;
    }
};