class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size() -1;
        vector<int> res;
        while(l < r) {
            int sum = numbers[l] + numbers[r];
            if(sum == target) {
                res.push_back(l +1);
                res.push_back(r +1);
                break;
            } else if (sum > target) {
                r--;
            } else if(sum < target) {
                l++;
            }
        }
        return res;
    }
};