338. Counting Bits

Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.

class Solution {
public:
    
    
    int count(int n){
        int c=0;
        
        while(n>0)
        {
            int r=n%2;
            
            if(r==1)c++;
            n=n/2;
            
        }
        return c;
    }
    
    
    vector<int> countBits(int n) {
     vector<int>arr(n+1);
        
        
        for(int i=0;i<=n;i++)
       arr[i]=count(i);
        
        
        return arr;
        
        
    }
};