#define uint unsigned int
class Solution {
public:
    uint highest_bit(uint num) {
        uint s = 0x80000000;
        uint pos = 32;
        uint k = s & num;
        if (num == 0)
        {
    	    return 0;
        }
        while (k == 0)
        {
            num = num << 1;
            k = s & num;
            pos = pos - 1;
        }
        return pos;
    }
    uint rangeBitwiseAnd(uint m, uint n) {
        uint zero_bits, m_bits, n_bits;
        uint k;
        zero_bits = highest_bit(n - m);
        m_bits = highest_bit(m);
        m = m >> zero_bits;
        n = n << 32 - m_bits;
        n = n >> 32 - m_bits + zero_bits;
        k = m & n;
        k = k << zero_bits;
        return k;
    }
};
