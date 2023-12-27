class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
      int n=colors.size();
     int totaltime=0;
      for(int i=1; i<n;i++)
      {
         if(colors[i]==colors[i-1])
         {
             int mintime= min(neededTime[i],neededTime[i-1]);
             totaltime = totaltime + mintime;
             if(neededTime[i]<neededTime[i-1])
             neededTime[i]= neededTime[i-1];
         }
      }
       return totaltime; 
    }
};