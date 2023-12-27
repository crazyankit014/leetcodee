class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n=nums.size();
        vector<int>even;
        map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }

    int maxCount = 0;
    int mostFrequentEvenNumber = -1;

    for ( auto x : mpp) {

        if (x.first % 2 == 0 && x.second > maxCount) {
            mostFrequentEvenNumber = x.first;
            maxCount = x.second;
        }
    }

    return mostFrequentEvenNumber;
    }
};