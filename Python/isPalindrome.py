#Name: Abdullah Yaqub
#Username: AbdullahYaqub72
#Approach: Comparing arrays while traversing in forward and reverse order

class Solution:
    def isPalindrome(self, num: int) -> bool:
        isPalind=True
        y=str(num)
        for i in range(len(y)-1):
            ind=len(y)-i-1
            if(y[i]!=y[ind]):
                isPalind=False
                break
            else:
                isPalind=True
                
        return isPalind
