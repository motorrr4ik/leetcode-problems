#include<iostream>
#include<vector>
#include<cstdlib>
#include<cstdint>
#include <typeinfo>
#include <unordered_set>
using namespace std;

// THIS WORKS
// class Solution {
// public:
// bool containsNearbyDuplicate(vector<int>& nums, int k) 
// {
//     unordered_set<int> set;
//     for(int i=0;i<nums.size();i++)
//     {
//         if(set.count(nums[i])) return true;
//         set.insert(nums[i]);

//         if(set.size()>k)
//             set.erase(nums[i-k]);
//     }

//     return false;
// }
// };

//ERROR
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        auto first = nums.begin();
        auto end = nums.end();
        int size = nums.size();
        
        if((size == 1) || (k == 0)) return false;
        if(k >= size) k = size-1;

        while(k != 0){
            if((first + k) >= end){
                --k;
                first = nums.begin();
            }
            
            if(*first == *(first+k) && (k != 0)){
                return true;
            } 
            ++first;
        }
        return false;
    }
};


int main(){
    vector<int> vec = {1,2};
    int k = 2;
    Solution sol;
    cout << sol.containsNearbyDuplicate(vec, k) << endl;
    return 0;
}