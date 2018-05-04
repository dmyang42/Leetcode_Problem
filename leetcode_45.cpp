class Solution {
public:
    int jump(vector<int>& nums) {
        int max = 0;
        int jump = 0;
        int pos = 0;
        vector<int> range(nums.size());
        
        for (int i = 0; i < nums.size(); ++i) {
            range[i] = i + nums[i];
        }
        
        for (int i = 0; i < nums.size() - 1; i = pos) {
            ++jump;
            if (range[i] >= nums.size() - 1)
                return jump;
            
            max = range[i];
            pos = i;
            for (int j = i + 1; j <= range[i]; ++j) {
                if (range[j] > max) {
                    max = range[j];
                    pos = j;
                }
            }
        }
        return jump;
    }
};
