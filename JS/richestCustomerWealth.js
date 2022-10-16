
const maximumWealth = function(accounts) {
    let max = 0;
    for(const customer of accounts)
        {
            let sum = customer.reduce((a,b) => a+b ,0);
            if(sum > max)
                {
                    max = sum;
                }
        }
    
    return max;
};

/* Test Case */
const accounts  = [[1,2,3],[3,2,1]];
console.log(maximumWealth(accounts))
