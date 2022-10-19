/**
 * constraints
 * Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.
 */
const removeDuplicateFromSortedArray = function (num) {
  const length = nums.length;

  if (length <= 1) {
    return length;
  }

  let i = 0;

  for (let j = 1; j < length; j++) {
    if (nums[i] != nums[j]) {
      i++;
      nums[i] = nums[j];
    }
  }

  return i + 1;
};

/* Test Case */
const nums = [1, 1, 2];
console.log(removeDuplicateFromSortedArray(nums));
