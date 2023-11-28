class Solution {
public:
int M=1e9+7;
    int numberOfWays(string corridor) {
        int n=corridor.size();

        vector<int> pos_seats;

        for(int i=0;i<n;i++)
        {
            if(corridor[i]=='S'){
            pos_seats.push_back(i);
        }
        }

        if(pos_seats.size() % 2 != 0 || pos_seats.size()==0)
        {
            return 0;
        } 

        long long result=1;
        int prev=pos_seats[1];
        for(int i=2;i<pos_seats.size();i+=2)
        {
            int length = pos_seats[i]-prev;

            result =(result * length) % M;
            prev= pos_seats[i+1];
        }
        return result;

    }
};