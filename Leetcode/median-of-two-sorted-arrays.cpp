class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int M = nums1.size(), N = nums2.size(), totalS = M+N, mid = totalS/2;
        int ptr1 = 0, ptr2 = 0, currI = 0, prv = 0, curr = 0;
        while(ptr1 + ptr2 <= mid) {
            prv = curr;
            if (ptr1 < M && (ptr2 >= N || nums1[ptr1] <= nums2[ptr2])) {
                curr = nums1[ptr1];
                ptr1++;
            } else {
                curr = nums2[ptr2];
                ptr2++;
            }
        }
        if (totalS % 2 == 0) {
            return (prv + curr) / 2.0;
        } else {
            return curr;
        }
    }
};