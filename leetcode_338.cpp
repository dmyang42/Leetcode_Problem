class Solution {
public:
    int end_bits(int num)
    {
        int bits = 0;
        while (num % 2 != 0)
        {
            num >>= 1;
            ++bits;
        }
        return bits;
    }
    vector<int> countBits(int num) 
    {
        vector<int> bits(num + 1, 0);
        for (int i = 1; i < num + 1; ++i)
        {
            int ebits = end_bits(i - 1);
            bits[i] = bits[i - 1] - ebits + 1;
        }
        return bits;
    }
};
