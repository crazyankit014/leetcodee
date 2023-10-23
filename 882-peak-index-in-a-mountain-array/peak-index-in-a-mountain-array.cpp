class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        // tc o(n); linear search
        int n=arr.size();
        // int maxi=arr[0];
        // int ans=0;
        // for(int i=0;i<n;i++)
        // {
        //     if(arr[i]>maxi)
        //     {
        //         maxi=arr[i];
        //         ans=i;
        //     }
        // }
        // return ans;

        // o(logn) binary search

        int s=0;
        int e=n-1;
        int mid;
        while(s<=e)
        {
            mid=e+(s-e)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            {
                
                return mid;
            }
            else if(arr[mid]>arr[mid-1])
            {
                s=mid+1;
            }
            else 
            {
                e=mid-1;
            }
        }
        return -1;
    }
};