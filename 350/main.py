class Solution(object):
    def intersect(self, nums1, nums2):
        hashmap = {}
        ans = []

        for el in nums1:
            if el in hashmap:
                hashmap[el] +=1
            else:
                hashmap[el] = 1
            
        for el in nums2:
            if el in hashmap and hashmap[el] !=0:
                ans.append(el)
                hashmap[el] -= 1
        return ans