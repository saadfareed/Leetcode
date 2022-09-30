class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        a=s.split(" ")
        #print(a)
        count=0
        for i in a:
            if(i!=''):
                i=str(i)
                #print(len(i))
                count=len(i)
        return(count)
