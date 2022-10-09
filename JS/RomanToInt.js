//Name: Raza Mohayyuddin

//Username: RazaKhan9639

//Approach: First create a hashmap to store values of each key, this can be optimized to use string array or any other method. After that create a variable named sum to store the sum of the. After that start iterating over the array & check if the character is less than the next character then add the values to sum till checked all characters. After that return the value of the sum variable.

var ro = new Map();
ro.set("I", 1);
ro.set("V", 5);
ro.set("X", 10);
ro.set("L", 50);
ro.set("C", 100);
ro.set("D", 500);
ro.set("M", 1000);
var romanToInt = function (s) {
  var sum = 0;
  var n = s.length;

  for (i = 0; i < n; i++) {
    if (i != n - 1 && ro.get(s.charAt(i)) < ro.get(s.charAt(i + 1))) {
      sum += ro.get(s.charAt(i + 1)) - ro.get(s.charAt(i));
      i++;
    } else {
      sum += ro.get(s.charAt(i));
    }
  }
  return sum;
};
