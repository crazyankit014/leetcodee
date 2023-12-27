class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]<=k){
                k++;
            }
        }
        return k;

    //  int n=arr.size();
    //     int s=0;
    //     int e=n-1;
    //     int mid;
    //     int ans=n;
    //     while(s<=e)
    //     {
    //         mid=s+(e-s)/2;
    //         if(arr[mid]-mid-1 >= k)
    //         {
    //             ans=mid;
    //             e=mid-1;
    //         }
    //         else 
    //         {
    //             s=mid+1;
    //         }
    //     }
    //     return ans+k;
    }
};