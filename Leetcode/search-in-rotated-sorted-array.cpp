class Solution {
public:
    int search(vector<int>& nums, int target) {
        int pivot = pivotFind(nums);
        if(pivot == nums.size()-1) {
            int s = 0, e = nums.size()-1;
            while(s <= e) {
                int mid = s+(e-s)/2;
                if(nums[mid] == target) {
                    return mid;
                } else if(nums[mid] < target) {
                    s = mid+1;
                } else {
                    e = mid-1;
                }
            }
        } else {
            int s = 0, e = pivot;
            while(s <= e) {
                int mid = s+(e-s)/2;
                if(nums[mid] == target) {
                    return mid;
                } else if(nums[mid] < target) {
                    s = mid+1;
                } else {
                    e = mid-1;
                }
            }
            s = pivot+1;
            e = nums.size()-1;
            while(s <= e) {
                int mid = s+(e-s)/2;
                if(nums[mid] == target) {
                    return mid;
                } else if(nums[mid] < target) {
                    s = mid+1;
                } else {
                    e = mid-1;
                }
            }
        }
        return -1;
    }
private:
    int pivotFind(vector<int>& nums) {
        int s = 0, e = nums.size()-1;
        if(nums[s] < nums[e]) {
                return e;
        }
        while(s <= e) {
            int mid = s + (e-s)/2;
            if(mid == 0 || mid == nums.size()-1 || nums[mid] > nums[mid+1]) {
                return mid;
            }
            if(nums[mid] > nums[e]) {
                s = mid;
            } else {
                e = mid;
            }
        }
        return e;
    }
};