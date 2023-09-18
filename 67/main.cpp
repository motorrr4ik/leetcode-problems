#include<string>
#include<iostream>
#include<algorithm>
#include <iterator>
#include<bitset>
#include<vector>
#include<sstream>

using namespace std;

class Solution {

public:
    string addBinary(string a, string b) {
        vector<char> aVec(a.begin(), a.end());
        vector<char> bVec(b.begin(), b.end());
        vector<int> res;
        stringstream ss;
        auto aBegin = aVec.begin();
        auto bBegin = bVec.begin();
        auto aEnd = aVec.end();
        auto bEnd = bVec.end();
        int carry = 0;
        int sum = 0;
        --aEnd;
        --bEnd;

        while((aEnd >= aBegin) && (bEnd >= bBegin)){
            sum = (*aEnd - '0') + (*bEnd - '0') + carry;
            carry = sum / 2;
            res.push_back(sum % 2);
            sum = 0;
            --aEnd;
            --bEnd;
        }
        while(aEnd >= aBegin){
            sum = (*aEnd-'0') + carry;
            carry = sum / 2;
            res.push_back(sum % 2);
            sum = 0;
            --aEnd;
        }
        while(bEnd >= bBegin){
            sum = (*bEnd-'0') + carry;
            carry = sum / 2;
            res.push_back(sum % 2);
            sum = 0;
            --bEnd;
        }

        if(carry){
            res.push_back(carry);
        }

        reverse(res.begin(), res.end());
        for(int& a: res){
            ss << a;
        }
        reverse(res.begin(), res.end());
        string result = ss.str();

        return result;
    }
};

int main(){
    Solution sol;
    string a = "11";
    string b = "1";
    string res = sol.addBinary(a, b);
    cout << res << endl;
    return 0;
}