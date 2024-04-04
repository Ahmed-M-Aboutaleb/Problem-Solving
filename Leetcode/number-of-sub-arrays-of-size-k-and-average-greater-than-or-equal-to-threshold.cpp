class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int res = 0, l = 0, currSum = 0, currSize = 0;
        for(int i = 0; i < arr.size(); i++) {
            if(i - l + 1 > k) {
                currSum -= arr[l];
                currSize--;
                l++;
            }
            currSum+=arr[i];
            currSize++;
            if(currSize == k && (currSum/currSize) >= threshold) {
                res++;
            }
        }
        return res;
    }
};