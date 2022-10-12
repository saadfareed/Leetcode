class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        new_list = []
        for i in range(n):
            new_list.append(nums[i])
            new_list.append(nums[i+n])
        return new_list