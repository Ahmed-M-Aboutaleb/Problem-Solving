class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int firstP = 0, secP = 0;
        vector<int> res;
        while(firstP < m && secP < n) {
            if(nums1[firstP]<= nums2[secP]) {
                res.push_back(nums1[firstP]);
                firstP++;
            } else {
                res.push_back(nums2[secP]);
                secP++;
            }
        }
        while(firstP < m) {
            res.push_back(nums1[firstP]);
            firstP++;
        }
        while(secP < n) {
            res.push_back(nums2[secP]);
            secP++;
        }
        for(int i = 0; i < res.size(); i++) {
            nums1[i] = res[i];
        }
    }
};