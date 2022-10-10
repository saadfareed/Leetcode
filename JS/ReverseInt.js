//Name: Raza Mohayyuddin

//Username: RazaKhan9639

//Approach: First check if the number is negative or not. Than take absolute of the number for working further. after that initialize reverse and reminder to zero. Than take a reminder of the last digit and multiply reverse by 10  to get the place of the newly added digit, and after that add the reminder digit. Divide the main number by 10 to remove that last digit with help of reminder value. Than check if the reverse number is greater than the required integer range or not ( 2^31 - 1 ). Than return the value by multiplying it with the flag's sign.

var reverse = function (x) {
  var num = Math.abs(x);
  var flag = 1;
  var reverse = 0,
    reminder = 0;

  if (x < 0) {
    flag = -1;
  }

  while (num > 0) {
    reminder = num % 10;
    reverse = reverse * 10 + reminder;
    num = (num - reminder) / 10;
  }

  if (reverse >= Math.pow(2, 31)) {
    return 0;
  }

  return reverse * flag;
};
