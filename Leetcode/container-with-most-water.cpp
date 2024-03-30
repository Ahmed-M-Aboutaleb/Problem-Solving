class Solution {
public:
    int maxArea(vector<int>& height) {
        int res=0, l = 0, r = height.size()-1;
        while(l<r) {
            int sum = (r-l) * min(height[r], height[l]);
            res = max(res, sum);
            if(height[r]>height[l]){
                l++;
            } else {
                r--;
            }
        }
        return res;
    }
};