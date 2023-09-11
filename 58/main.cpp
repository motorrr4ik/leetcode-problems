class Solution {
public:
    int lengthOfLastWord(string s) {
        int w_size = 0;
        auto it = s.end() - 1;

        while (*it == ' ') {
            if (it == s.begin()) return w_size;
            --it;
        } 

        while (*it != ' ') {
            if (it == s.begin()) return ++w_size;
            ++w_size;
            --it;
        }
        return w_size;
    }
};