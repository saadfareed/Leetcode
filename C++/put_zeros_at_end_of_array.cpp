//  Name: Shoaib Sabir
//  Username: Shoaib019
//  Question: given a array of numbers move all zeros to the end of the array
//  Approach: take two pointers one at end and one at beginning of array
//            use while loop to terminate when both pointers colid
//            inside loop just swap when non zero at beginning pointer
//            and when non zero at end pointer otherwise just increase beginning pointer
class Solution {
public:
    void append_zeros(int nums [],int size) {
    int last_indx = size - 1;
    int start_indx = 0;
    while(start_indx < last_indx)
    {
      if(nums[start_indx] == 0)
      {
          if(nums[last_indx] == 0)
          {
              last_indx--;
          }
          else
          {
              nums[start_indx] = nums[last_indx];
              nums[last_indx] = 0;
              start_indx++;
              last_indx--;
          }
          
      }
      else
      {
        start_indx++;   
      }
    }
  }
};
