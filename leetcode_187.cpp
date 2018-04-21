class Solution {
public:
    int which_num(char ch){
        if(ch == 'A')
            return 0;
        else if(ch == 'C')
            return 1;
        else if(ch == 'G')
            return 2;
        else if(ch == 'T')
            return 3;
    }
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> res;
        char count[1048575] = {0}; //indicate using quanternary
        string tmp, rest;
        int len = s.length();
        for (int i = 0; i < len - 9; ++i)
        {
            tmp = s.substr(i, 10);
            int itr = 0;
            for (int j = 0; j < 10; ++j)
            {
                itr = itr + pow(4, j) * which_num(tmp[j]);
            }
            if(count[itr] == 3)
            {
                continue;
            }
            ++count[itr];
            if(count[itr] == 2)
            {
                res.push_back(tmp);
                count[itr] = 3;
            }
        }
        return res;
    }
};
