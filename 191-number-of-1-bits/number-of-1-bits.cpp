class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        // for(int i=31;i>=0;i--)
        // {
        //     if(n>>i & 1 == 1)
        //     {
        //         count++;
        //     }
        // }

        // 2nd approach 
        // while(n>0)
        // {
        //      n=n & (n-1); // make zero right  most 1
        //         count++;
            
        // }
        // return count;


        // 3rd approach 

        return __builtin_popcount(n);
    }
};