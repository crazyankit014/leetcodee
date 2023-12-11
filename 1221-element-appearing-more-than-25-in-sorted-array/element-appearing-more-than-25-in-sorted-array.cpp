class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            mpp[arr[i]]++;
        }

        for(auto x : mpp)
        {
            if(x.second>n/4)
            {
                return x.first;
            }
        }
        return -1;
    }
};