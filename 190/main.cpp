#include<iostream>
#include<bitset>
#include<string>
#include<algorithm>

using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32> num(n);
        string numStr = num.to_string();
        reverse(numStr.begin(), numStr.end());
        num =  bitset<32>(numStr);
        return num.to_ullong();
    }
};

int main(){
    Solution sol;
    uint32_t test = 43261596;
    uint32_t res = sol.reverseBits(test);
    cout << res << endl;
    return 0;
}