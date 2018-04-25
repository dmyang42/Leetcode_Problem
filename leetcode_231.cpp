class Solution {
public:
    bool isPowerOfTwo(int n) {
        int t = 0;
        if (!n)
            return false;
        while (n % 2 != 1 && t < 32)
        {
            n >>= 1;
            ++t;
        }
        n >>= 1;
        ++t;
        while (n % 2 != 1 && t < 32)
        {
            n >>= 1;
            ++t;
        }
        if (t == 32)
            return true;
        else
            return false;
    }
};
