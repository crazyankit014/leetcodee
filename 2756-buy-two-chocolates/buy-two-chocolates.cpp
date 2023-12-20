class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
      // 1st approach tc(nlogn)

        // int n=prices.size();
        // sort(prices.begin(),prices.end());
        // for(int i=0;i<n;i++){
        //     if(prices[0]+prices[1] > money) 
        //     return money;
        // }
        // return money-(prices[0]+prices[1]);

        // 2nd approach o(n)

        int n=prices.size();
        int mini=INT_MAX;
        int smini=INT_MAX;

        for(int i=0;i<n;i++)
        {
            if(prices[i]<mini)
            {
                smini=mini;
                mini=prices[i];
            }
            else
            {
                smini=min(prices[i],smini);
            }
        }
      if(mini+smini > money)
      {
          return money;
      }

      return money-(mini+smini);

    }
};