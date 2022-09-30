class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        if max(nums)<0:
            return max(nums)
        
        curr_sum ,max_sum=0,0
        for num in nums:
            curr_sum = max(0, curr_sum + num)
            max_sum = max(curr_sum, max_sum)
        return max_sum
