class Solution:
    def trap(self, height: List[int]) -> int:
        ans=0
        maxl=maxr=0
        l=0
        r=len(height)-1
        while(l<r):
            if(height[l]<height[r]):
                if height[l]>maxl:
                    maxl=height[l]
                else:
                    ans+=maxl-height[l]
                l+=1
            else:
                if height[r]>maxr:
                    maxr=height[r]
                else:
                    ans+=maxr-height[r]
                r-=1
        return ans


           
                
                
                    
                    
                    
                    
                    
                    
        
        
        
