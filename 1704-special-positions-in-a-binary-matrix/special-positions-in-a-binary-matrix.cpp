class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int result=0;
        for(int row=0; row<n;row++)
        {
            for(int col=0;col<m;col++)
            {
                if(mat[row][col]==0) continue;
                 bool check= true;

                 // check for row
                 for(int r=0;r<n;r++)
                 {
                     if(r != row && mat[r][col]==1)
                     {
                         check=false;
                         break;
                     }
                 }

                 // check for col

                 for(int c=0;c<m;c++)
                 {
                     if(c != col && mat[row][c])
                     {
                         check=false;
                         break;
                     }
                 }

                 if(check==true)
                 {
                     result++;
                 }
            }
        }
        return result;
    }
};