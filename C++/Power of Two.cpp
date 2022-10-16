class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        
        
        for(int i=0;i<=30;i++){
             int power= pow(2,i);
            
            if(power==n){
                
               return true;}
                
        }
       
       
        
     return false;   
    }
};
