class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        new_lst = []
        n = len(nums)
        for i in range(n):
            count = 0
            for j in range(n):
                if j!=i and nums[j]<nums[i]:
                    count += 1
            new_lst.append(count)
        return new_lst