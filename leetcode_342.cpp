class Solution {
public:
    bool isPowerOfFour(int num) {
        int st = 0x55555555;
        int sh = 0xAAAAAAAA;
        int t = 0;
        if ((num & sh) != 0 && num != 1)
            return false;
        st &= num;
        while (st % 2 != 1 &&  t < 16)
        {
            st >>= 2;
            ++t;
        }
        if (t == 16)
            return false;
        else
        { 
            st >>= 2;
            ++t;
            while (st % 2 != 1 && t < 16)
            {
                st >>= 2;
                ++t;
            }
            if (t == 16)
                return true;
            else
                return false;
        }
        
    }
};
