class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max = 0;
        for (int i = 0; i < nums.size() - 1; ++i) {
            int range = nums[i];
            range = i + range;
            if (range > max) {
                max = range;
            }
            if (i == max)
                return false;
        }
        return true;
    }
};
