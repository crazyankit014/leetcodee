class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        int maxFreq=0;
        int totalfreq=0;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
            int freq=mpp[nums[i]];

            if(freq > maxFreq)
            {
                maxFreq= freq;
                totalfreq = freq;
            }

            else if(freq== maxFreq){
                totalfreq = totalfreq+ freq;
            }

        }
        return totalfreq;
    }
};