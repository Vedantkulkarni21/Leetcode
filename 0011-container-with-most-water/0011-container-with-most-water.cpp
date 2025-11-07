class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int maxi = 0;
        while(l<r)
        {
            int newArea;
            (height[l] < height[r]) ? newArea = height[l] * (r-l) : newArea = height[r] * (r-l);
            if(newArea > maxi)
                maxi = newArea;
            height[l] < height[r] ? l++ : r--;
        }
        return maxi;
    }
};