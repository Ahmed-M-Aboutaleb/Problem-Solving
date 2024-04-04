class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int l = 0;
        set<int> window;
        for(int r = 0; r< nums.size(); r++) {
            if(r-l >k) {
                window.erase(nums[l]);
                l++;
            }
            if(window.count(nums[r]) > 0)
                return true;
            window.insert(nums[r]);
        }
        return false;
    }
};