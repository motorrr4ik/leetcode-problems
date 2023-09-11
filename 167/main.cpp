class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int i = 0;
        int j = numbers.size()-1;
        int sum = target + 1;
        
        while(sum != target){
            sum = numbers[i] + numbers[j];

            if(sum > target){
                --j;
            }else if(sum < target){
                ++i;
            }

        }
        return {++i, ++j};
    }
};