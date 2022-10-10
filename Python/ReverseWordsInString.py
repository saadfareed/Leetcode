#Name: Abdullah Yaqub
#Username: AbdullahYaqub72
#Approach: Splits the string and getting it in reverse order using lists.

class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        list1=[]
        splitted=s.split()
        ste=""
        rev=""
        for i in s.split():
            list1.append(i)
        list2=list1[::-1]
        for i in list2:
            rev=rev+" "+i+""
        rev=rev[1:]
        return rev