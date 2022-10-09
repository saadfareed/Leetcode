# Name: Muhammad Abdullah

# Username: muhammadabdullah660

# Approach: Iteratively check the brackets/pattern of brackets in given string with dictionary key/values

class Solution(object):
    def isValid(self, s):
        stack = []
        dict = {"]": "[", "}": "{", ")": "("}
        for char in s:
            if char in dict.values():
                stack.append(char)
            elif char in dict.keys():
                if stack == [] or dict[char] != stack.pop():
                    return False
            else:
                return False
        return stack == []
