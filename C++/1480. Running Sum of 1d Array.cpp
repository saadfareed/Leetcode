class Solution {
public:
    vector<int> runningSum(vector<int>& nums)
    {
        vector<int>runsum;
        int sum = 1;
        
        for(auto i:nums)
        {
            
            sum = sum+i;
            runsum.push_back(sum);
        }
        return runsum;
    }
};
