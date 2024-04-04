class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int len = INT_MAX, l = 0, window = 0;
        for(int i = 0; i < nums.size(); i++) {
            window+= nums[i];
            while(window >= target) {
                len = min(i-l +1, len);
                window -= nums[l];
                l++;
            }
        }
        return len == INT_MAX ? 0 : len;
    }
};