class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
      int n=nums.size();
      map<int,int>mp;

      for(int i=1;i<=n;i++)
      {
          mp[i]++;
      }  

      for(int i=0;i<n;i++)
      {
          mp[nums[i]]++;
      }

      int ans=-1;
      for(auto it:mp)
      {
          if(it.second ==1 && it.first>0)
          {
              return it.first;
          }
      }
      return n+1;
    }
};