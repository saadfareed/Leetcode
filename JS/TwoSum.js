//Name: Raza Mohayyuddin

//Username: RazaKhan9639

//Approach: First create a empty array named sum. After that create map to store elements of array subtracted by target as keys and its indices as values after looping through array. After that loop through the array again and if difference varaibale is in the hashmap then store the current index value in sum array and its associated index value in sum array.

var twoSum = function (nums, target) {
  sum = [];
  // Map to store the difference and its index
  index_map = new Map();
  // Loop for each element in the array
  for (let i = 0; i < nums.length; i++) {
    let difference = target - nums[i];
    if (index_map.has(difference)) {
      sum[0] = i;
      sum[1] = index_map.get(difference);
      break;
    } else {
      index_map.set(nums[i], i);
    }
  }
  return sum;
};
