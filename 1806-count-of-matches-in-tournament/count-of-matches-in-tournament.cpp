class Solution {
public:
    int numberOfMatches(int n) {
       // first approach 
        return (n-1);

        // 2nd approach

        int matches=0;
        while(n>1)
        {
            if(n%2==0){
           matches=matches+(n/2);
            n=n/2;
            }
            else
            {
                matches=matches+(n-1)/2;
                n=(n-1)/2+1;
            }
            
        }
        return matches;
    }
};