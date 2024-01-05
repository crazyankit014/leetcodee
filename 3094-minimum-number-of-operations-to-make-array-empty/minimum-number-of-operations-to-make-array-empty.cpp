class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
         int result=0;
        for(auto x:mpp)
        {
           int freq=x.second;
           if(freq==1) return -1;

           result=result+ceil((double)freq/3);
        }

        return result;
    }
};