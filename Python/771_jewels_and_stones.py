class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        res = 0
        distinct_jewels = [*jewels]
        for stone in stones:
            if stone in distinct_jewels:
                res += 1
        return res
