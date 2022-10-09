//Name: Raza Mohayyuddin

//Username: RazaKhan9639

//Approach:First we use toString method to convert integer to string Then we Convert the string in array by split("") method then reverse array Then join() to merge array. Than compare with original string and return.

var isPalindrome = function (x) {
  return x == x.toString().split("").reverse().join("");
};
