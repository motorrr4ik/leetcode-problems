#include<iostream>
#include<string> 
#include<bitset>

using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = 0;
        bitset<32> b(n);
        string str = b.to_string();
        auto beg = str.begin();
        auto end = str.end();
        while(beg != end){
            if(*beg == '1'){
                ++res;
            }
            ++beg;
        }
        return res;
    }
};

int main(){
    uint32_t n = 00000000000000000000000000001011;
    Solution sol;
    int res = sol.hammingWeight(n);
    cout << res << endl;
    return 0;
}