class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        set<vector<int>> ms;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i< n-2; i++) {
            int l = i+1, r = n -1;
            while(l< r){
                int sum = nums[i] + nums[l] + nums[r];
                if(sum == 0){
                     ms.insert({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                } else if(sum > 0) {
                    r--;
                } else {
                    l++;
                }
            }
        }
        for(auto it : ms){
            res.push_back(it);
        }
        return res;
    }
};