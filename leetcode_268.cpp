class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result = nums.size();
        int i = 0;
        for (int num : nums)
        {
            i += num;
        }
        result = result * (result + 1) / 2;
        return result - i;
    }
};
