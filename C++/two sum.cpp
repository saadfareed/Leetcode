
//TWO SUM Problem 1ss Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sol;
        for(int i=0;i<nums.size()-1;i++)
        {int flag=-1;

         for(int j=i+1;j<nums.size();j++)
         {  if(nums[i]+nums[j]==target)
             {
                 flag=1;
                 sol.push_back(i);
             sol.push_back(j);
                 break;
             }
         }
          if(flag==1)
          {
            break;  
          }
         }
        return sol;
    }
        
};
