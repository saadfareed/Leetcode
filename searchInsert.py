class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        j=len(nums)
        #print(j)
        for i in nums:
            if(i<target):
                continue
            else:
                j=nums.index(i)
                return(j)
        return(j)
