class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mpp;

        for(int i=0;i<arr.size();i++)
        {
            mpp[arr[i]]++;
        }
    unordered_set<int> uniqueCounts;
    for (auto pair : mpp) {
        if (!uniqueCounts.insert(pair.second).second) {
            return false;
        }
    }
    return true;
    }
};