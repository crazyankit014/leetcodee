class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
    //     int n=nums.size();
    //     sort(nums.begin(),nums.end());
    //     int ans=0;
    //     int i=0;
    //     int j=n-1;
    //     while(i<j)
    //     {
    //         if(nums[i]+nums[j]==k)
    //         {
    //             ans++;
    //             i++;
    //             j--;
    //         }
    //         else if(nums[i]+nums[j] < k)
    //         {
    //             i++;
    //         }
    //         else 
    //         {
    //             j--;
    //         }
    //     }
    //    return ans;
    std::unordered_map<int, int> freq;

    int ans = 0;
    for (int num : nums) {
        int complement = k - num;
        if (freq[complement] > 0) {
            // If complement is found in the hashmap, decrement its frequency
            freq[complement]--;
            ans++;
        } else {
            // Increment the frequency of the current element
            freq[num]++;
        }
    }

    return ans;
    }
};