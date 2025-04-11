class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2, -1); // Initialize with [-1, -1]
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                result[0] = i;
                while (i + 1 < nums.size() && nums[i + 1] == target) {
                    i++;
                }
                result[1] = i;
                break;
            }
        }
        return result;
    }
};
