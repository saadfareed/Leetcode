//Name: Gabriele Nakassima

//Username: gabynk

//Approach: create a new array and merge the array that comes in the parameters and sort and find the average position of the created array.
// checks whether the array size is even or odd. if odd returns the sum of two positions divided by 2 if not returns the average position value.

/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */

 var findMedianSortedArrays = function (nums1, nums2) {
  let mergedArray = new Array();

  mergedArray = [...nums1, ...nums2];
  mergedArray.sort(function (a, b) { return a - b });

  const medianPosition = parseInt(mergedArray.length / 2);

  if (mergedArray.length % 2 === 0)
      return (mergedArray[parseInt(medianPosition)] + mergedArray[parseInt(medianPosition) - 1]) / 2;

  return mergedArray[parseInt(medianPosition)];
};

