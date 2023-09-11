class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> nums(0);
        int dummy = x;
        if(x < 0) return false;
        if(x == 0) return true;

        for(int i = 0; dummy > 0; ++i){
            nums.push_back(dummy % 10);
            dummy = dummy / 10;
        }
        
        auto it_s = nums.begin();
        auto it_e = nums.end()-1;
        while(it_s < it_e){
            if(*it_s != *it_e){
                return false;
            }
            ++it_s;
            --it_e;
        }
    return true;
    }
};