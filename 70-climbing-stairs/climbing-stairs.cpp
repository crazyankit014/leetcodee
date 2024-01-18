class Solution {
public:
    int climbStairs(int n) {
         vector<int> dp(n+1);
        dp[0]=dp[1]=1;
        for(int i=2;i<=n;i++)   
            dp[i]=dp[i-1]+dp[i-2];
        return dp[n];

        // if(n<=2) return n;

        // int m=2;
        // int j=1;
        // int k=0;

        // for(int i=2;i<n;i++)
        // {
        //     k=m+j;
        //     j=m;
        //     m=k;
        // }
        // return k;
    }
};