//  Name: Shoaib Sabir
//  Username: Shoaib019
//  Approach: find how many zeros there by loop then another loop will put zeros to the end
class Solution {
public:
    void append_zeros(int nums [],int size) {
    int last_idex = size - 1;
    int count = 0;
    for(int i = 0; i < size; i++){
        if(nums[i] == 0)
        count++;
    }
    std::cout << "count : "<< count << std::endl;
    for(int i = 0; i < size && count <= 0; i++)
    {
        if(nums[i] == 0)
        {
            int tmp = nums[i];
            nums[i] = nums[last_idex];
            nums[last_idex] = tmp;
            last_idex--;
            count--;
        }
        
    }
      
}
};
