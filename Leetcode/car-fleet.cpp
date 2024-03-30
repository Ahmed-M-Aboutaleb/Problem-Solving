class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> cars;
        for(int i = 0; i<position.size(); i++){
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.begin(), cars.end(), comp);
        stack<float> ms;
        for(int i = 0; i < cars.size(); i++) {
            float time = (float)(target-cars[i].first)/(float)cars[i].second;
            if(!ms.empty() && time > ms.top()){
                ms.push(time);
            } else if(ms.empty()){
                ms.push(time);
            }
        }
        return ms.size();
    }
private:
    static bool comp(pair<int,int> &a, pair<int,int> &b){
        return a.first > b.first;
    }
};