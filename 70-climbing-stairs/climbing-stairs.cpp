class Solution {
public:
    int climbStairs(int n) {
        //  vector<int> dp(n+1);
        // dp[0]=dp[1]=1;
        // for(int i=2;i<=n;i++)   
        //     dp[i]=dp[i-1]+dp[i-2];
        // return dp[n];

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
         long long int prev1 = 1;
        long long int prev2 = 1;
        for(int i = 0; i < n; i++){
            long long int temp = prev1;
            prev1 = prev1 + prev2;
            prev2 = temp;
        }
        return prev2;
    }
};