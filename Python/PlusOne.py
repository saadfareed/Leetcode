# Name: Muhammd Abdullah

# Username: muhammadabdullah660

# Approach: Convert input list to integer using map function and add 1 to it. Then convert it back to list using list function

class Solution(object):
    def plusOne(self, digits):
        num = int("".join(list(map(str, digits))))+1
        stringify = str(num)
        res = list(stringify)
        return(res)
