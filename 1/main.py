class Solution(object):
    def twoSum(self, nums, target):
        hashmap = {}
    
        for idx, element in enumerate(nums):
            remainder = target - element

            if remainder in hashmap:
                return[hashmap[remainder], idx]

            hashmap[element] = idx

        return []