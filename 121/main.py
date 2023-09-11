class Solution:
    def maxProfit(self, prices):
        # Initiate max profit to 0 and currMin to first elem
        maxProfit = 0
        currMin = prices[0]
        
        # Iterate from index 1 till end of list
        for i in range(1,len(prices)):
            # Calculate best profit if sold on day "i"
            currProfit = prices[i]-currMin
            # If better than current maxProfit, update maxProfit
            if maxProfit < currProfit:
                maxProfit = currProfit
            # Update the current minimun element in list
            if currMin > prices[i]:
                currMin = prices[i]
        
        return maxProfit