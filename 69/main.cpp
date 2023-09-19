#include<iostream>
#include<cmath>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if(x <= 1) return x;
        long long mostSignificantBit = (int)log2(x);
        long long powOfTwo = 1 << mostSignificantBit;
        long long res = 0;

        while(powOfTwo){
            if((res + powOfTwo) * (res + powOfTwo) <= x) res += powOfTwo;
            powOfTwo >>= 1;
        }

        return res;
    }
};


int main(){
    Solution sol;
    int res = sol.mySqrt(8);
    cout << res << endl;
    return 0;
}