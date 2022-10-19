class Solution(object):    
    def intToRoman(self, num: int) -> str:
            values = [1000, 900, 500, 400,
                      100, 90, 50, 40,
                      10, 9, 5, 4, 1]
            symbols = ["M", "CM", "D", "CD",
                       "C", "XC", "L", "XL",
                       "X", "IX", "V", "IV",
                       "I"]
            roman = ''
            i = 0
            while num > 0:
                k = num // values[i]
                for j in range(k):
                    roman += symbols[i]
                    num -= values[i]
                i += 1
            return roman

if __name__ == '__main__':
    # begin
    s = Solution()
    print (s.intToRoman(10))
