class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int area = 0, r = n-1, l = 0, maxL=height[l], maxR=height[r];
        while(l< r){
            if (maxL <= maxR) {
                l++;
                maxL = max(maxL, height[l]);
                area += maxL - height[l];
            } else {
                r--;
                maxR = max(maxR, height[r]);
                area += maxR - height[r];
            }
        }
        return area;
    }
};