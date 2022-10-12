//Name: Raza Mohayyuddin

//Username: RazaKhan9639

//Approach: First create a variable rt to store the required string. After that use if else conditions to to compare the numbers of 'a' and 'b' in a usual order of counting and store the string in rt by appending 2b then a or 2a then b. Time complexity : n, where n is the count of a or b , and space complexity is normal O(1).

var strWithout3a3b = function (a, b) {
  let rt = ""; //Required String
  while (a > 0 || b > 0) {
    // More 'b', append "bba"
    if (a < b) {
      if (b-- > 0) {
        rt += "b";
      }
      if (b-- > 0) {
        rt += "b";
      }
      if (a-- > 0) {
        rt += "a";
      }
    }

    // More 'a', append "aab"
    else if (b < a) {
      if (a-- > 0) {
        rt += "a";
      }
      if (a-- > 0) {
        rt += "a";
      }
      if (b-- > 0) {
        rt += "b";
      }
    }

    // Equal number of 'a' and 'b'
    // append "ab"
    else {
      if (a-- > 0) {
        rt += "a";
      }
      if (b-- > 0) {
        rt += "b";
      }
    }
  }
  return rt;
};
