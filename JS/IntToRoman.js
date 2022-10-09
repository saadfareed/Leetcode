//Name: Raza Mohayyuddin

//Username: RazaKhan9639

//Approach:First create a map which has each key & value pair in it.After that create a res variable to store output string. Then start looping over the map variable where i checks for remainder has any roman number & this value is stored in res variable, then it does modulo division. After that it checks whether the num variable is equal to zero then it returns the res variable otherwise continues in the loop.

var intToRoman = function (num) {
  const map = {
    M: 1000,
    CM: 900,
    D: 500,
    CD: 400,
    C: 100,
    XC: 90,
    L: 50,
    XL: 40,
    X: 10,
    IX: 9,
    V: 5,
    IV: 4,
    I: 1,
  };

  let res = "";

  for (key in map) {
    const rCounter = Math.floor(num / map[key]);

    if (rCounter !== 0) {
      res += key.repeat(rCounter);
    }

    num %= map[key];

    if (num === 0) return res;
  }

  return res;
};
