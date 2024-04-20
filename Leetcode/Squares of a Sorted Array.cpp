class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = 0, r = nums.size()-1, i = r;
        vector<int> res(r+1);
        while(l<=r) {
            if(abs(nums[l]) < abs(nums[r])) {
                res[i] = nums[r]*nums[r];
                r--;
            } else {
                res[i] = nums[l]*nums[l];
                l++;
            }
            i--;
        }
        return res;
    }
};