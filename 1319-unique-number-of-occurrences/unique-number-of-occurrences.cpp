class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mpp;

        for(int i=0;i<arr.size();i++)
        {
            mpp[arr[i]]++;
        }
    unordered_set<int> st;
    for (auto x : mpp) {
        int freq=x.second;
        if (st.find(freq) != st.end()) {
            return false;
        }
            st.insert(freq);
        
    }
    return true;
    }
};