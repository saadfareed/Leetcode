'''
Q: Given an integer array nums, find the contiguous subarray 
(containing at least one number) which has the largest sum 
and return its sum.

A subarray is a contiguous part of the array.

Ex: Input: [2,1,3,-1,2,1,-5,4] -> Output: 6 because [4,-1,2,1]

Solution 1: DP + Kadane’s Algorithm 
Time: O(n)
Space: O(1)
Initialize two variables and set them equal to first value in array
‘currentSubarray’ will keep returning the count of the current subarray we are currently on
‘maxSubarray’ will be our final return value, continuously update it whenever we find a bigger subarray
Iterate through array, starting on the 2nd element
for each number, add it to the ‘currentSubarray’ we are building 
if ‘currentSubarray’ becomes negative, we know it isn’t worth keeping, so throw it away
currentSubarray = max(i, currentSubarray + i)
update ‘maxSubarray’ everytime we find a new max
maxSubarray = max(maxSubarray, currentSubarray)
return ‘maxSubarray’

 Notes:
When you see ‘max’ or ‘min’ consider DP.
'''

class Solution:

    def maxSubArray(self, nums: List[int]) -> int:
        res = nums[0]

        total = 0
        for n in nums:
            total += n
            res = max(res, total)
            if total < 0:
                total = 0
        return res