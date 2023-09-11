class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        if (nums.size() == 1)
        {
            return vector<int>({nums[0]*nums[0]});
        }

        size_t index = nums.size() - 1;
        vector<int> res(nums);
        vector<int>::iterator left = nums.begin();
        vector<int>::iterator right = nums.end()-1;

        while (left != right)
        {
            if (pow(*left, 2) >= pow(*(right), 2))
            {
                res[index] = pow(*left, 2);
                --index;
                ++left;
            }
            else if (pow(*left, 2) < pow(*right, 2))
            {
                res[index] = pow(*right, 2);
                --index;
                --right;
            }
        }
        res[0] = pow(*left,2);
        return res;
    }
};