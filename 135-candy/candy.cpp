class Solution {
public:
    int candy(vector<int>& arr) 
    {
        int n=arr.size();
         vector<int>L2R (n,1);
         vector<int>R2L (n,1);
         vector<int> ans;

        for(int i=1; i<n; i++)
        {
            if( arr[i] > arr[i-1])
            {
                L2R[i]=L2R[i] + L2R[i-1];
            }
        } 

        for(int i=n-2; i>=0;i--)
        {
            if(arr[i] > arr[i+1])
            {
                R2L[i]=R2L[i]+R2L[i+1];
            }
        }
         int count=0;
        for(int i=0; i<n; i++)
        {
            if( L2R[i] > R2L[i])
            {
                ans.push_back(L2R[i]);
            }
            else
            { 
               ans.push_back(R2L[i]);
            }

            count = count + ans[i];
        }

        return count;

        

    }
};