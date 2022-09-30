class Solution:
    def validIPAddress(self, queryIP: str) -> str:
        com=queryIP.split(".")
        com2=queryIP.split(":")
        def IPV4(com):
            flag=False
            for i in com:
                if(i.isdigit() and int(i)>=0 and int(i)<=255):
                    flag=True
                    if(i=="0" and len(i)>1):
                        flag=False
                        break
        
                else:
                    flag=False
                    break
        
            if(flag==True):
                print("IPV4")
            else:
                print("Neither")
                
        def IPV6(com):
            flag=True
            for i in com:
                if(len(i)<=4 and len(i)>0):
                    for j in i:
                        if(j not in "0123456789abcdefABCDEF"):
                            flag=False
                            break
                        else:
                            flag=True
                else:
                    print("Neither")
                    flag=False
                    break
            if(flag==True):
                print("IPV6")
            else:
                print("Neither")
                
        if(len(com)==4):
            return(IPV4(com))
        elif(len(com2)==8):
            return(IPV6(com2))
        else:
            print("Neither")
            
Solution().validIPAddress("2001:0db8:85a3:0:0:8A2E:0370:7331")
