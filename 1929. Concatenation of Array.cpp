class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>number;
        
        for(auto i:nums)
            number.push_back(i);
        for(auto i:nums)
            number.push_back(i);
        return number;
        
        
    }
};
