class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {

        auto lemda=[&](int &a,int &b){
            int x1=__builtin_popcount(a);
      int x2=__builtin_popcount(b);
      if(x1!=x2)
      {
          return x1<x2;
      }
      else 
      {
          return a<b;
      }
    };
        sort(arr.begin(),arr.end(),lemda);
        return arr;
    }
};