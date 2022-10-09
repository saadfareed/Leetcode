# Name: Muhammd Abdullah

# Username: muhammadabdullah660

# Approach: Simply add both arrays and sort the bigger array and return the middle element if length is odd else add n/2 and n/2 - 1 elements.
class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        nums3 = nums1+nums2
        nums3.sort()
        if len(nums3) % 2 == 0:
            return (float(nums3[(len(nums3)/2)]+nums3[(len(nums3)/2)-1]))/2
        else:
            return nums3[int(len(nums3)/2)]
