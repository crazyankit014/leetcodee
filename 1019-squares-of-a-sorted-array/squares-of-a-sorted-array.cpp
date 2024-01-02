class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        vector<int>v
;        for(int i=0;i<n;i++)
        {
            ans = nums[i]*nums[i];
            v.push_back(ans);
        }

       sort(v.begin(),v.end());
       return v;
    }
};