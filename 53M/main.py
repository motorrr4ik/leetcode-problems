class Solution(object):
    def maxSubArray(self, nums):
        current_max = nums[0]
        max_sum = nums[0]
        for i in nums[1:]:
            current_max = max(i, current_max+i)
            max_sum = max(max_sum, current_max)
        return max_sum