class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int s=0;
        int e=n-1;
        int maxi=0;
        while(s<e)
        {
            int w=e-s;
            int h=min(height[s],height[e]);
            int area=w*h;
            maxi=max(maxi,area);
            if(height[s]<height[e])
            {
                s++;
            }
            else if(height[s]>height[e])
            {
               e--;
            }
            else
            {
                s++;
                e--;
            }
        }
        return maxi;
    }
};