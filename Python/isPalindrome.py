class Solution:
    def isPalindrome(self, x: int) -> bool:
        flag=True
        y=str(x)
        for i in range(0,len(y)-1):
            ind=len(y)-i-1
            if(y[i]==y[ind]):
                flag=True
            else:
                flag=False
                break
        return flag
