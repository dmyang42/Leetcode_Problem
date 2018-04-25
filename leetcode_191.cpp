class Solution {
public:
    int hammingWeight(uint32_t n) {
        int i = 0;
        for (int j = 0; j < 32; ++j)
        {
            if (n % 2 != 0)
            {
                ++i;
            }
            n >>= 1;
        }
        return i;
    }
};
