class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        auto b = nums.begin();
        auto e = nums.end();
        while(b != e){
            s.insert(*b);
            ++b;
        }
        vector<int> dummy(s.begin(), s.end());
        nums = dummy;
        return s.size();        
    }
};