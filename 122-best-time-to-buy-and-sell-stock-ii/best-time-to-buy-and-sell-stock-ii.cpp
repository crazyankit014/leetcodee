class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxpro=0;
        for(int i=1;i<n;i++)
        {
            maxpro=maxpro+max(0,prices[i]-prices[i-1]);
        }
        return maxpro;
    }
};