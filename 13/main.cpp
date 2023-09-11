class Solution {
private:
    unordered_map<char, int> roman_nums = { {'I', 1}, {'V', 5},{'X', 10},{'L', 50},{'C', 100},{'D', 500},{'M', 1000} };
public:
    int romanToInt(string s) {
        int res = 0;
        auto s_begin = s.begin();
        auto dummy = s.end() - 1;
        auto s_end = s.end() - 2;

        res += roman_nums[*dummy];
        while(s_end >= s_begin) {
            if (roman_nums[*s_end] >= roman_nums[*dummy]) {
                res += roman_nums[*s_end];
                --dummy;
            }
            else {
                res -= roman_nums[*s_end];
                --dummy;
            }
            if (s_end == s_begin) {
                return res;
            }
            --s_end;
        }
        return res;
    }
};