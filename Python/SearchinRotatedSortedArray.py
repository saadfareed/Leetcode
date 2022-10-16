# Name: Muhammd Abdullah

# Username: muhammadabdullah660

# Approach: Simply find the index of target. If not found then return -1.
class Solution(object):
    def search(self, nums, target):
        return nums.index(target) if nums.count(target) > 0 else -1
