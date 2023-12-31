class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        // int ans= -1;
        // for(int i=0;i<s.size();i++)
        // {
        //     for(int j=i+1;j<s.size();j++)
        //     {
        //         if(s[i] == s[j])
        //         {
        //             ans=max(ans,j-i-1);
        //         }
        //     }
        // }
        // return ans;

        unordered_map<char,int> mpp;
        int ans=-1;
        for(int i=0;i<s.size();i++)
        {
    
            if(mpp.find(s[i]) == mpp.end()){
                mpp[s[i]]=i;
            }

            else
            {
                ans=max(ans,i-mpp[s[i]]-1);
            }
        }
                 return ans;
    }
};