class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        max = 0
        count = 0
        for i in nums:
            # print(i)
            if i==1:
                count = count+1
                if count > max:
                    max = count
            else:
                count = 0
        return max
        