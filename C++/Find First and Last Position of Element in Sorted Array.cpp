//Name: Nurshat Fateh Ali

//Username: nurshatfateh

//Approach: Simple solution using modified version of binary search

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v;
        int s=0;
        int e=nums.size()-1;
        int m;
        int f=-1,l=-1;
        while(s<=e)
        {
            
            m=(s+e)/2;
            if(target==nums[m])
            {
              f=m;
              e=m-1;  
                
            
            }
            else if(target>nums[m])
            {
                s=m+1;
            }
            else if(target<nums[m])
            {
                e=m-1;
            }
     
            
        }
        s=0;
       e=nums.size()-1;
          while(s<=e)
        {
            
            m=(s+e)/2;
            if(target==nums[m])
            {
              l=m;
                s=m+1;
                
                
            
            }
            else if(target>nums[m])
            {
                s=m+1;
            }
            else if(target<nums[m])
            {
                e=m-1;
            }
     
            
        }
        
            v.push_back(f);
            v.push_back(l);
        return v;
    }
};