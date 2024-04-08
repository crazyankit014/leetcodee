class Solution {
public:
    void sortColors(vector<int>& nums) {
        // sort(nums.begin(),nums.end());

        // int n=nums.size();
        // int low=0,mid=0,high=n-1;
        // while(mid<=high)
        // {
        //     if(nums[mid]==0){
        //         swap(nums[low],nums[mid]);
        //         low++;
        //         mid++;
        //     }
        //     else if(nums[mid]==1)
        //     {
        //         mid++;
        //     }
        //     else
        //     {
        //         swap(nums[mid],nums[high]);
        //         high--;
        //     }
            
        // }

        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]<nums[i])
                {
                    swap(nums[i],nums[j]);
                }
            }
        }
    }
};