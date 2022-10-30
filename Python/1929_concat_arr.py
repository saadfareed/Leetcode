class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        res = []
        res += nums + nums
        return res
