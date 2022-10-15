class Solution:
    def jump(self, nums: List[int]) -> int:
        maxIndex = [10000] * len(nums)
        maxIndex[0] = 0
        for i in range(0,len(nums)-1):
            for j in range(i,i+(nums[i])+1):
                if j< len(nums) and maxIndex[j]>maxIndex[i]+1:
                    maxIndex[j] = maxIndex[i]+1
        #print(maxIndex)
        return maxIndex[len(maxIndex)-1]
