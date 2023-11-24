class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n=piles.size();
        sort(piles.begin(),piles.end());
        int  a=piles.size()-1;
        int m=piles.size()-2;
        int b=0;
        int result=0;
        while(m>b)
        {
           result=result+piles[m];
           b++;
           a=a-2;   // not needed
           m=m-2;
        }
        return result;
    }
};