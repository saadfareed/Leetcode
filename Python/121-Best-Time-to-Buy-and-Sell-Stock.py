'''
Q: You are given an array of prices where prices[i] is the 
price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy
one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. 
If you cannot achieve any profit, return 0.

Ex: Input: prices = [7,1,5,3,6,4] -> Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.

Solution 1: One Pass/Track buy_index
Time: O(n)
Space: O(1)
Initialize two variables and set them to 0
buy_index -> track the day we’re going to buy on (smallest cost)
profit -> profit = buy - sell  
Iterate through the array either using enumerate or in range 
We need the index
for i, p in enumerate(prices)
If currentPrice is less than the prices[buy_index], update this to be our lowest price
if p < prices[buy_index]
buy_index = i
Update profit 
profit = max(p - prices[buy_index], profit)
return profit
'''
class Solution:
    # solution 1: track buy index
    def maxProfit(self, prices: List[int]) -> int:
        buy_day = 0
        profit = 0
        for day, price in enumerate(prices):
            if prices[buy_day] > prices[day]:
                buy_day = day
                
            profit = max(prices[day] - prices[buy_day], profit)   
        return profit

    # solution 2: sliding window
    def maxProfit(self, prices: List[int]) -> int:
    # l = buy_index, r = sell_index basically
        l, r = 0, 1
        maxP = 0

        while r < len(prices):
        # if our buy_index price is less than our sell_index price, we have profit
            if prices[l] < prices[r]:
                profit = prices[r] - prices[l]
                maxP = max(maxP, profit)
        # no profit, update left so we know at this index, everything before was not profit
            else:
                l = r
            r += 1
        return maxP