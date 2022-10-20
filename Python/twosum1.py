# Name: Ayesha Aslam

# Username: ch-ayesha

# Approach: this approach will gives O(n) time complexity and O(n) space complexity
class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        dic={}
        for i in range(len(nums)):
            otherpair=target-nums[i]
            if otherpair in dic:
                return [dic[otherpair],i]
            dic[nums[i]]=i
if __name__ == '__main__':
    s = Solution()
    print (s.twoSum( [2, 7, 11, 15], 9))

    
       