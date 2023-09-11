class Solution {
public:
    bool isPowerOfTwo(int n) {
        bitset<64> bs(n);
        return bs.count() == 1;
    }
};