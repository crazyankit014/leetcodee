class Solution {
public:
    int search(vector<int>& arr, int target) {
    // o(n)  Linear Search 
    // int n=arr.size();
    // int ans=0;
    // for(int i=0;i<n;i++)
    // {
    //     if(arr[i]==target)
    //     {
    //         ans=i;
    //         return ans;
    //     }
    // }
    // return -1;

    // o(log n ) Binary Search

    int n=arr.size();
    int s=0;
    int e=n-1;
    int mid;
    while(s<=e)
    {
        mid=s+(e-s)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]>=arr[0])
        {
            if(arr[s]<=target && target <= arr[mid])
            {
                e=mid-1;
            }
            else 
            {
                s=mid+1;
            }
        }
        else 
        {
            if(arr[mid]<=target && target <=arr[e])
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
}
    return -1;
    }
};