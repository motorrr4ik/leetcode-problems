class Solution {
public:
    map<int, int> m;
    int singleNumber(vector<int>& nums) {
        auto it = nums.begin();
        while(it != nums.end()){
            if (m.find(*it) == m.end()) {
                m.insert({*it, 1});
            } else {
                ++m[*it];
            }
            ++it;
        }
        
        for(auto const &x: m){
            if(x.second == 1) return x.first;
        }
        return 1;
    }
};