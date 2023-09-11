class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {

        //if (nums.size() == 1)
        //{
        //    return;
        //}

        while(k > nums.size())
        {
            k = k - nums.size();
        }


        std::vector<int> res(nums.size());
        int start = 0;
        int end_k = nums.size() - k;
        int end = nums.size();

        int c = 0;

        for (int i = end_k; i != end; ++i)
        {
            res[c] = nums[i];
            ++c;
        }

        c = k;

        for (int i = start; i != end_k; ++i)
        {
            res[c] = nums[i];
            ++c;
        }
        swap(nums, res);
    }
};