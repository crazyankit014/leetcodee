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
        while(n>0)
        {
             n=n & (n-1);
                count++;
            
        }
        return count;
    }
};