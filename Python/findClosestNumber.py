class Solution:
    def findClosestNumber(self, nums: List[int]) -> int:
        result=max(nums)
        result1=min(nums)
        for i in nums:
            if(i==0):
                result=0
                break 
            else:
                if(i<0 and result1<i):
                    result1=i
                elif(i>0 and result>i):
                    result=i
        if (result<=-result1):
            return(result)
        else:
            return(result1)
            
