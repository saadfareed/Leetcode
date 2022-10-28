#Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

class Solution {
public:
    void sortColors(vector<int>& nums) {
    int i=0,j=1,k=2,count0=0,count1=0,count2=0;
    for(int l=0;l<nums.size();l++)
    {
    if(nums[l]==i)
        count0++;
    if(nums[l]==j)
        count1++;
    if(nums[l]==k)
        count2++;
    }
//     for(int l=0;l<nums.size();l++)
//     {
        
        //int i=0;
        
        while(count0)
        {
            nums[i]=0;
            i++;
            count0--;
        }
        while(count1)
        {
             nums[i]=1;
            i++;
            count1--;
        }
        int s=nums.size();
        while(count2)
        { nums[i]=2;
            i++;
            count2--;
        }
        
        
    }
  
};