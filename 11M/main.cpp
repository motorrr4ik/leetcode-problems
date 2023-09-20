#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        auto start = height.begin();
        auto end = height.end();
        --end;
        int maxWaterVolume = 0;
        int tempVal = 0;
        for(;start < end;){
            tempVal = min(*start, *end)*(end - start);
            maxWaterVolume = max(maxWaterVolume, tempVal);
            if(*start < *end){
                ++start;
            }else{
                --end;
            }
        }

        return maxWaterVolume;
    }
};

int main(){
    Solution sol;
    vector<int> vec = {1,8,6,2,5,4,8,3,7};
    int res = sol.maxArea(vec);
    cout << res << endl;
    return 0;
}