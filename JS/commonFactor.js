const commonFactors = function(a, b) {
    if(a === 1 || b === 1)
        {
            return 1;
        }
    let commonFactors = 1;
    let isSmallerNumberDivisble = false;
    const smallerNumber = a > b ? b : a;
    const largerNumber = a < b ? b : a;
    
    const smallerNumberHalf = smallerNumber/ 2;
    
      
    if(largerNumber % smallerNumber === 0){
        commonFactors++;
        isSmallerNumberDivisble = true
        }
    
  

    for(let i = 2 ; i <= smallerNumberHalf ; i++){
        if(smallerNumber % i === 0){
            if(isSmallerNumberDivisble){
                commonFactors++;
            }else{
                 if(largerNumber % i === 0){
                     commonFactors++;
                 }
            }            
        }
        
        
    }
    
    return commonFactors;
};

/* Test Case */
console.log(commonFactors(12,6))