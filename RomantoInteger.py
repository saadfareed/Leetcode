class Solution:
    def romanToInt(s: str) -> int:
        result=0
        for i in range (0 , len(s)):
            #print(i)
            if(s[i]=="I"):
                result=result+1
            elif(s[i]=="V"):
                if(s[i-1]=="I" and i!=0):
                    result=result+3
                else:
                    result=result+5
            elif(s[i]=="X"):
                if(s[i-1]=="I" and i!=0):
                    result=result+8
                else:
                    result=result+10
                
            elif(s[i]=="L"):
                if(s[i-1]=="X" and i!=0):
                    result=result+30
                else:
                    result=result+50
                    
            elif(s[i]=="C"):
                if(s[i-1]=="X" and i!=0):
                    result=result+80
                else:
                    result=result+100
                
                
            elif(s[i]=="D"):
                if(s[i-1]=="C" and i!=0):
                    result=result+300
                else:
                    result=result+500
                
            elif(s[i]=="M"):
                if(s[i-1]=="C" and i!=0):
                    result=result+800
                else:
                    result=result+1000
        return result

print(Solution.romanToInt("MMMCDXC"))