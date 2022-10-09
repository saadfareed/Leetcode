
const isPalindromeNumber = function (num) {
  num = String(num);
  const half = num.length;
  for (let i = 0; i < half; i++) {
    if (num[i] !== num[num.length - 1 - i]) {
      return false;
    }
  }
  return true;
};

/* Test Case */
const numberToTest  = [121, 34543, 'KSKS', 131, 489466784 ];
for(let i = 0 ; i < numberToTest.length ; i++){
    console.log(`Testing ${numberToTest[i]} is Palindrome Number : ${isPalindromeNumber(numberToTest[i])}`);
}

