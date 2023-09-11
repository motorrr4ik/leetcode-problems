class Solution(object):
    def containsDuplicate(self, nums):
        if(len(nums)>1):
            a = set(nums)
            if(len(a)<len(nums)):
                return True
        return False