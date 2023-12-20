class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int n=prices.size();
        sort(prices.begin(),prices.end());
        for(int i=0;i<n;i++){
            if(prices[0]+prices[1] > money) 
            return money;
        }
        return money-(prices[0]+prices[1]);
    }
};