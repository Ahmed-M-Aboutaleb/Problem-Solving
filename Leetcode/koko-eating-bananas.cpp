class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long n = piles.size(), maxE = *max_element(piles.begin(), piles.end()), res = maxE;
        if(n == h) {
            return maxE;
        }
        long long l = 1, r = maxE;
        while(l<=r) {
            long long k = (l+r)/2;
            long long hours = 0;
            for(int j = 0; j<n;j++) {
                hours += ceil((double)piles[j]/k);
            }
            if(hours <= h) {
                res = min(res, k);
                r = k-1;
            } else {
                l = k+1;
            }
        }
        return res;
    }
};