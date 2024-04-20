class Solution {
public:
    vector<vector<int>> sols;
    vector<int> curr;
    vector<vector<int>> subsets(vector<int>& nums) {
        sol(nums, 0);
        sols.push_back(vector<int>());
        return sols;
    }
private:
    void sol(vector<int>& nums, int i) {
        if (i == nums.size()) {
            return;
        }
        curr.push_back(nums[i]);
        sols.push_back(curr);
        sol(nums, i+1);
        curr.pop_back();
        sol(nums, i+1);
    }
};