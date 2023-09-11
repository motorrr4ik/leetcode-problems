class Solution {
public:

    void moveZeroes(std::vector<int>& nums) {

        int left = 0;
        int right = nums.size();

        while (left < right)
        {
            if (nums[left] == 0)
            {
                for (int i = left; i < right-1; ++i)
                {
                    std::swap(nums[i], nums[i + 1]);
                }
                --right;
            }
            
            if (!nums[left] == 0)
            {
                ++left;
            }
        }
    }
};