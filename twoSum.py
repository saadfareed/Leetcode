class Solution:
     def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(len(nums)):
            for j in range(i+1, len(nums)):
                if nums[i] + nums[j] == target:
                    return([i, j])
Solution.twoSum(Solution, [2, 7, 11, 15], 9)
