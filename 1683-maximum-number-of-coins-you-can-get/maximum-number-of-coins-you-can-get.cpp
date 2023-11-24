class Solution {
public:
    int maxCoins(vector<int>& piles) {

         // Approach 1 tc (nlogn)

        // int n=piles.size();
        // sort(piles.begin(),piles.end());
        // int  a=n-1;     // largest 
        // int m=n-2;      // second largest 
        // int b=0;         // smallest
        // int result=0;
        // while(m>b)
        // {
        //    result=result+piles[m];
        //    b++;
        //    a=a-2;   // not needed
        //    m=m-2;
        // }
        // return result;


        // approach 2 tc(nlogn)

         int n=piles.size();
         sort(piles.begin(),piles.end());
         int result=0;

         for(int i=n/3;i<n;i=i+2)
         {
             result=result+piles[i];
         }

        return result;
    }
};