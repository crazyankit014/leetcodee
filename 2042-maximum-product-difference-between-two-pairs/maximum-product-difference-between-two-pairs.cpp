class Solution {
public:
    int maxProductDifference(vector<int>& nums) {

        // tc= nlogn , sc=  logn 

        // sort(nums.begin(),nums.end());
        // int n=nums.size();
        // long long x;
        // long long  y;
        // for(int i=1;i<=n;i++)
        // {
        //    x=nums[0]*nums[1];
        //    y=nums[n-1]*nums[n-2];
        // }
        // return y-x;

        // 2nd approach 

        int l=0;
        int sl=0;
        int s=INT_MAX;
        int ss=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
           if(nums[i]>l)
           {
               sl=l;
               l=nums[i];
           }
           else
           {
               sl=max(sl,nums[i]);
           }

           if(nums[i] < s)
           {
               ss=s;
               s=nums[i];
           }
           else{
               ss=min(ss,nums[i]);
           }
        }

        return l * sl - s*ss; 
    }
};