// Name: Shoaib Sabir
// Username: Shoaib019
// Approach: make new hashmap check if key already exists then
//           increase by 1 otherwise put 0 after that find maximum value
//           and return coresponding key
import java.util.HashMap;
class Solution {
    public int majorityElement(int[] nums) {
        HashMap<Integer, Integer> keepCount = new HashMap<Integer, Integer>();
        for (int i = 0; i < nums.length; i++) 
        {
            if(keepCount.containsKey(nums[i])){
                keepCount.put(nums[i], keepCount.get(nums[i]) + 1);
            }
            else{
                keepCount.put(nums[i], 0);
            }
        }
        int majorityVar = 0;
        int maxValue = (Collections.max(keepCount.values()));
        for (Map.Entry<Integer, Integer> countMap : keepCount.entrySet()) {
            if (countMap.getValue() == maxValue) {
                majorityVar = countMap.getKey();
            }
        }
        return majorityVar;
    }
}