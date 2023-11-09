class Solution {
public:
int MOD=1e9+7;
    int countHomogenous(string s) {
        int n=s.length();
        int result=0;
        int length=0;
        for(int i=0;i<n;i++)
        {
            if(i>0 && s[i]==s[i-1]){
                length++;
            }
            else
            {
                length=1;
            }

            result=(result+length) % MOD;
        }
        return result;
    }
};