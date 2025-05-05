class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      int k = 0;
    for (int i = 0; i < nums.size(); i++) {

        // Place the element which is not 
        // equal to ele at the kth position
        if (nums[i] != val) {
            nums[k] = nums[i];  
            
            // Increment the count of 
            // elements not equal to ele
            k++;             
        }              
    }
    return k;  
    }
};