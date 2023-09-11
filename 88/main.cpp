class Solution(object):
    def merge(self, nums1, m, nums2, n):
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: None Do not return anything, modify nums1 in-place instead.
        """
        if n == 0:
            print(nums1)
            return

        if m == 0:
            nums1[:] = nums2[:]
            print(nums1)
            return

        if nums1[m-1] <= nums2[0]:
            nums1[m:] = nums2
            print(nums1)
            return
         
        if nums2[n-1] <= nums1[0]:
            temp = nums1[:]
            nums1[0:m+n-1] = nums2[0:n]
            print(nums1)
            nums1[n:(m+n)] = temp[0:m]
            print(nums1)
            return

        nums1[m:] = nums2
        for i in range(m):
            for j in range(m+n-1):
                if nums1[j] > nums1[j+1]:
                    temp = nums1[j+1]
                    nums1[j+1] = nums1[j]
                    nums1[j] = temp
        print(nums1)