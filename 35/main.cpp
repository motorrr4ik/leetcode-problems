class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        size_t mid = 0;

        while (start <= end)
        {
            mid = (start + end)/2;
            int mid_val = nums[mid];

            if (mid_val > target)
            {
                end = mid - 1;
            }
            else if (mid_val < target)
            {
                start = mid + 1;
            }
            else
            {
                return mid;
            }
        }

        for(size_t i = 0; i < nums.size(); ++i)
        {
            if(target > nums[i])
            {
                mid = i+1;
            } 
        }
        return mid;
    }
};