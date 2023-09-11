class Solution {
public:
    std::string reverseWords(std::string s) {
        std::stringstream ss(s);
        std::string word;
        std::string res = "";

        while (ss >> word)
        {
            std::reverse(word.begin(), word.end());
            res.append(word);
            res.append(" ");
        }
        res.pop_back();
        return res;
    }
};