class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        stack<int> ms;
        set<int> mss;
        int max = 0;
        for(auto num: nums){
            mss.insert(num);
        }
        for(auto num: mss){
            if(ms.empty()) {
                ms.push(num);
                if(max <= ms.size()){
                    max = ms.size();
                }
                continue;
            }
            if(num == ms.top() + 1){
                ms.push(num);
                if(max <= ms.size()){
                    max = ms.size();
                }
            } else {
                ms = stack<int>();
                ms.push(num);
            }
        }
        return max;
    }
};