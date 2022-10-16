# Name: Muhammd Abdullah

# Username: muhammadabdullah660

# Approach: Simply find the index of target. If not found then return -1. then find index in reversed array for end index
class Solution(object):
    def searchRange(self, nums, target):
        start = nums.index(target) if nums.count(target) > 0 else -1
        end = len(nums) - nums[::-1].index(target) - \
            1 if nums.count(target) > 0 else -1
        return [start, end]
