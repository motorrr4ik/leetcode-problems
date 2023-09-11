#include<vector>
#include <algorithm>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<char> sub_str;
        auto it_s = s.begin();
        auto dummy = it_s;
        int max_substr_size = 0;

        while(dummy != s.end()){
            if(find(sub_str.begin(), sub_str.end(), *dummy) != sub_str.end()){
                if(max_substr_size < sub_str.size()){
                    max_substr_size = sub_str.size();
                }
                sub_str.clear();
                ++it_s;
                dummy = it_s;
            }
            sub_str.push_back(*dummy);
            ++dummy;
        }
        return (max_substr_size > sub_str.size() ? max_substr_size: sub_str.size());
    }
};