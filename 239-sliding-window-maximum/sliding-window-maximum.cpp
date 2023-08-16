class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;

        vector<int>ans;

        int right=0;
        int left=0;

        while(right <nums.size())
        {
            pq.push({nums[right],right});

            if(right-left+ 1<k)
             right++;

             else if (right-left+1 ==k)
             {
                 while(pq.top().second<left) pq.pop();

                 ans.push_back(pq.top().first);
                 left++;right++;
             }
        }
        return ans;
    }
};