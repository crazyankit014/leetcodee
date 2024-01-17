class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
    //     unordered_map<int,int>mpp;

    //     for(int i=0;i<arr.size();i++)
    //     {
    //         mpp[arr[i]]++;
    //     }
    // unordered_set<int> st;
    // for (auto x : mpp) {
    //     int freq=x.second;
    //     if (st.find(freq) != st.end()) {
    //         return false;
    //     }
    //         st.insert(freq);
        
    // }
    // return true;

       vector<int>vec(2001,0);
       for(int i=0;i<arr.size();i++)
       {
           vec[arr[i]+1000]++;
       }

       sort(vec.begin(),vec.end());

       for(int i=1;i<2001;i++)
       {
           if(vec[i] != 0 && vec[i] == vec[i-1])
           {
               return false;
           }
       }
       return true;
    }
};