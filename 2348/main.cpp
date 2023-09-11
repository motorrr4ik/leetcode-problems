class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long num = 0;
        vector<int> zeros;
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] == 0){
                zeros.push_back(0);
                num += zeros.size();
            }else{
                zeros.clear();
            } 
        }
       return num; 
    }
};