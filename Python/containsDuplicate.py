class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        s=set(nums)
        if len(s)==len(nums):
            return 0
        return 1
Solution.containsDuplicate(Solution, [1,2,3,1])
