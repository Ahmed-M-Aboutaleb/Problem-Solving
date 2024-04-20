class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxNums = 0, currWindow= 0;
        for(int r: nums) {
            if(r != 1) {
                currWindow = 0;
                continue;
            }
            currWindow++;
            maxNums = max(maxNums, currWindow);
        }
        return maxNums;
    }
};