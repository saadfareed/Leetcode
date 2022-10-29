//Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

//You must implement a solution with a linear runtime complexity and use only constant extra space.

 
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>m;
        for(auto i: nums)
        {
            m[i]++;
        }
        int x;
        for(auto i:m)
        {
            if(i.second==1)
                x= i.first;
        }
        return x;
    }
};
