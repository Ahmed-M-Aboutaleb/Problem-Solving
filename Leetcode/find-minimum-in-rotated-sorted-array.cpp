class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r= nums.size()-1;
        int keyIndex = r;
        while(l<= r) {
            if(nums[l] < nums[r]) {
                break;
            }
            int mid = l+ (r-l) /2;
            if(mid == 0 || mid == nums.size()-1 || nums[mid] > nums[mid+1]) {
                keyIndex = mid;
                break;
            }
            if(nums[mid] > nums[r]) {
                l = mid;
            }
            if(nums[mid] < nums[r]) {
                r = mid;
            }
        }
        return nums[(keyIndex +1)%nums.size()];
    }
};