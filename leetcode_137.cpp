class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i = 0, j = 0;
        for (int t = 0; t != nums.size(); ++t)
        {
            i = (i ^ nums[t]) & ~j;
            j = (j ^ nums[t]) & ~i;
        }
        return i;
        
    }
};
