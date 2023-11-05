class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
       int n = arr.size();
       // find max element
       int maxi=arr[0];
        for(int i=1;i<n;i++)
        {
           if(arr[i]>maxi)
           {
               maxi=arr[i];
           }
        }
    // int maxi=*max_element(begin(arr),end(arr));
          if(k>=n) return maxi;
        int winner=arr[0];
        int streak=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]>winner)
            {
                winner=arr[i];
                streak=1;
            }
            else 
            {
                streak++;
            }
        if(streak==k || winner== maxi)
        {
            return winner;
          }
        }
            return -1;

    }
};