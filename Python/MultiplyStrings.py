#Name: Abdullah Yaqub
#Username: AbdullahYaqub72
#Approach: Making Strings Integers and then multiplying them


class Solution(object):
    def multiply(self, num1, num2):
        """
        :type num1: str
        :type num2: str
        :rtype: str
        """
        mul_num1=int(num1)
        mul_num2=int(num2)
        res=mul_num1*mul_num2
        string_res=str(res)
        return string_res