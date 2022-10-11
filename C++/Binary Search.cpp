// Name: Samsor Rahman

// Username: samsorrahman

// Approach: Binary Search using Recusive approuch and easy solution

class Solution {
public:
        int binary(vector<int>v,int l, int r, int key)
    {
		// till l doesn't exceed r
        if(r >= l)
        {
            int mid = (l+r)/2;
			
			// if key equals mid return mid
            if(key == v[mid])
                return mid;
				
			// if key is less than mid
			// recursive call for left half
            else if(key < v[mid])
                return binary(v,l,mid-1,key);
				
			// key is greater than mid
			// recursive call for right half
            else
                return binary(v,mid+1,r,key);
        }
		
		// if key not found
        return -1;
    }
    int search(vector<int>& nums, int target) {
       int result = binary(nums,0,nums.size()-1,target);
		
		// if func returns -1 key doesn't exists
        if (result == -1)
            return -1;
		
		// return index of key
        else
            return result;   
    }
	
};
    