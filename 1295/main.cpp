class Solution(object):
    def findNumbers(self, nums):
        count = 0
        ev_or_od = 0
        for i in nums:
            temp = i
            while temp != 0:
                temp = temp//10
                ev_or_od = ev_or_od + 1
            if ev_or_od%2 == 0:
                count = count + 1
                ev_or_od = 0
            else:
                ev_or_od = 0
        return count